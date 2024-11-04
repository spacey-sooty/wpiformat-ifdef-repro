#ifdef _WIN32
#include <memory>

some func() {
  std::unique_ptr<char[]> buffer =  std::make_unique<char[]>("");
}
#endif
