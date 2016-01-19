#pragma once

#include <base/aliases.h>
#include <base/process_forward.h>

namespace dist_clang {

namespace base {
namespace proto {

class Flags;

}  // namespace proto
}  // namespace base

namespace client {

class Command {
 public:
  using List = List<UniquePtr<Command>>;

  virtual ~Command() {}

  virtual base::ProcessPtr CreateProcess(Immutable current_dir,
                                         ui32 user_id) const = 0;
  virtual String GetExecutable() const = 0;
  virtual String RenderAllArgs() const = 0;  // For testing.
  virtual bool FillFlags(base::proto::Flags* flags, const String& clang_path,
                         const String& clang_major_version) const {
    // By default no one can fill flags.
    return false;
  }

  static bool GenerateFromArgs(int argc, const char* const raw_argv[],
                               List& commands);
};

}  // namespace client
}  // namespace dist_clang
