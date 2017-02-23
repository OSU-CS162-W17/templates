#include <iostream>

#include "swap.hpp"

// template <class T>
// void swap(T& a, T& b) {
//   T tmp = a;
//   a = b;
//   b = tmp;
// }


template <class T, class U>
void print_two(T first, U second) {
  std::cout << first << second <<std::endl;
}


int main(int argc, char** argv) {
  int a = 5, b = 8;
  // swap<int>(a, b);
  swap(a, b);
  std::cout << "a: " << a << "\tb: " << b << std::endl;

  float x = 3.1415, y = 10.75;
  // swap<float>(x, y);
  swap(x, y);
  std::cout << "x: " << x << "\ty: " << y << std::endl;

  print_two<const char*, int>("thing: ", 5);
}
