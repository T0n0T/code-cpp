#include <iostream>

int test(int a, int b) { return a + b; }

int main(int /*argc*/, const char ** /*argv*/) {
  int c = test(3, 6);
  std::cout << "Hello, from cpp-study!\n";
}