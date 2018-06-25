#include <iostream>
#include "ver_lib.h"

int main(int argc, char const *argv[])
{
  std::cout << "Hello, World!" << std::endl;
  std::cout << "Version: " << ver_major() << "." << ver_minor() << "." << ver_patch() << std::endl;
  return 0;
}
