import argparse
import logging
import os
import subprocess
import sys
import tempfile
import urllib2


BUILD_PATH = os.path.dirname(os.path.abspath(__file__))
ROOT_PATH = os.path.dirname(BUILD_PATH)
BIN_PATH = os.path.join(ROOT_PATH, 'bin')
CLANG_REVISION = '299960-1'
CLANG_BASE_URL = ('https://infra.browser.yandex-team.ru/cache/'
                 'commondatastorage.googleapis.com/chromium-browser-clang/')
OUT_DIR = os.path.join(ROOT_PATH, 'out')
if sys.platform == 'darwin':
    CLANG_ARCH = 'Mac'
    GN_PATH = os.path.join(BIN_PATH, 'mac', 'gn')
elif sys.platform == 'linux2':
    CLANG_ARCH = 'Linux_x64'
    GN_PATH = os.path.join(BIN_PATH, 'linux', 'gn')
else:
    CLANG_ARCH = 'Win'
    GN_PATH = os.path.join(BIN_PATH, 'win', 'gn.exe')

CLANG_URL='{}/{}/clang-{}.tgz'.format(
    CLANG_BASE_URL, CLANG_ARCH, CLANG_REVISION)
CLANG_PATH = os.path.join(OUT_DIR, 'clang-{}'.format(CLANG_REVISION))
CLANG_BIN_DIR = os.path.join(CLANG_PATH, 'bin')

SAN_SUPPRESSIONS_FILE = os.path.join(BUILD_PATH, 'lsan_suppression.txt')

GIT_BINARY = 'git.bat' if sys.platform == 'win32' else 'git'

PROJECTS = {
    'Debug': {
        'args': 'config_for_debug=true',
        'target': 'All',
    },
    'Portable': {
        'args': 'portable_build=true',
        'target': 'All',
    },
    'Release': {
        'args': '',
        'target': 'All',  # TODO: Build Packages
    },
    'Test': {
        'args': 'config_for_tests=true',
        'target': 'Tests',
    }
}


def _download_temp_file(url):
    CHUNK_SIZE = 16 * 1024
    logging.info('Downloading {}'.format(url))
    fd = tempfile.TemporaryFile()
    request = urllib2.urlopen(url)
    while True:
        chunk = request.read(CHUNK_SIZE)
        if not chunk:
            break
        fd.write(chunk)
    fd.seek(0)


def _update_clang():
    if os.path.isdir(CLANG_PATH):
        logging.info('Clang is already up to date')
        return
    with contextlib.closing(_download_temp_file(CLANG_URL)) as f:
        tarfile.open(mode='r:gz', fileobj=f).extractall(
            path=CLANG_PATH)


def _init_and_update_submodules():
    subprocess.check_call([GIT_BINARY, 'submodule', 'init'], cwd=ROOT_PATH)
    subprocess.check_call([GIT_BINARY, 'submodule', 'update'], cwd=ROOT_PATH)


def _generate_projects():
    for project, conf in PROJECTS.iteritems():
        args = '--args={}'.format(conf['args'])
        out_dir = '//out/{}'.format(project + '.gn')
        subprocess.check_call([GN_PATH, '--check', args, '--ide=vs',
                               'gen', out_dir])


def _build_target(project, target):
    directory = os.path.join(OUT_DIR, project + '.gn')
    subprocess.check_call(['ninja', target], cwd=directory)


def _run_tests():
    environment = os.environ.copy()
    environment['ASAN_OPTIONS'] = 'new_delete_type_mismatch=0'
    environment['LSAN_OPTIONS'] = SAN_SUPPRESSIONS_FILE

    TESTS_LIST = [
        'unit_tests',
        'leveldb_arena_test',
        'leveldb_autocompact_test',
        'leveldb_bloom_test',
        'leveldb_cache_test',
        'leveldb_coding_test',
        'leveldb_corruption_test',
        'leveldb_crc32c_test',
        'leveldb_db_test',
        'leveldb_dbformat_test',
        'leveldb_env_test',
        'leveldb_filename_test',
        'leveldb_filter_block_test',
        'leveldb_hash_test',
        'leveldb_issue178_test',
        'leveldb_issue200_test',
        'leveldb_log_test',
        'leveldb_memenv_test',
        'leveldb_skiplist_test',
        'leveldb_table_test',
        'leveldb_version_edit_test',
        'leveldb_version_set_test',
        'leveldb_write_batch_test',
    ]

    for binary in TESTS_LIST:
        if sys.platform == 'win32':
            binary = binary + '.exe'
        binary_path = os.path.join(OUT_DIR, 'Test.gn', binary)
        subprocess.check_call([binary_path], env=environment)


def main():
    logging.basicConfig(level=logging.DEBUG)
    parser = argparse.ArgumentParser(sys.argv[0])
    parser.add_argument('--configure', action='store_true',
                        help='Configure projects')
    parser.add_argument('--run-tests', action='store_true',
                        help='Run tests, assuming threy\'re built')
    parser.add_argument('--build-project',
                        help='Name of project to build')
    parser.add_argument('--target',
                        help='Target to build')
    args = parser.parse_args()
    if args.configure:
        _init_and_update_submodules()
        _generate_projects()
    elif not args.run_tests:
        _update_clang()
        environ = os.environ.copy()
        environ['PATH'] = CLANG_BIN_DIR + os.pathsep + environ['PATH']
        target = PROJECTS[args.build_project]['target']
        if args.target:
            target = args.target
        _build_target(args.build_project, target)
    else:
        _run_tests()

    return 0


if __name__ == '__main__':
    sys.exit(main())
