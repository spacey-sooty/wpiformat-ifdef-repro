

#ifdef _WIN32
#include <memory>
void func() {
  std::unique_ptr<char[]> buffer = std::make_unique<char[]>("");
}
#else
void func() {}
#endif
