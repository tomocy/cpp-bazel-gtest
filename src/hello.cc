#include "src/hello.h"

#include <string>

std::string Hello(const std::string& name) noexcept {
  if (name.empty()) {
    return "Hello, world";
  }

  return "Hello, " + name;
}