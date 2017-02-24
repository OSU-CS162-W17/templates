#include <iostream>

#include <vector>

#include "swap.hpp"
#include "vector.hpp"

// template <class T>
// void swap(T& a, T& b) {
//   T tmp = a;
//   a = b;
//   b = tmp;
// }


template <class T, class U>
void print_two_things(T first, U second) {
  std::cout << first << second <<std::endl;
}


int main(int argc, char** argv) {
  // int a = 5, b = 8;
  // // swap<int>(a, b);
  // swap(a, b);
  // std::cout << "a: " << a << "\tb: " << b << std::endl;
  //
  // float x = 3.1415, y = 10.75;
  // // swap<float>(x, y);
  // swap(x, y);
  // std::cout << "x: " << x << "\ty: " << y << std::endl;
  //
  // print_two_things<const char*, int>("thing: ", 5);

  // vector<int> ivec;
  // vector<float> fvec;
  // for (int i = 0; i < 100000; i++) {
  //   float fval = i * 0.25;
  //   ivec.push_back(i);
  //   fvec.push_back(fval);
  //   // std::cout << "inserted: " << ivec.at(i) << "and " << fvec.at(i) << std::endl;
  // }
  //
  // ivec.at(5) *= ivec.at(7);
  // // std::cout << "ivec[5] is now: " << ivec.at(5) << std::endl;

  // std::vector<int> ivec;
  // std::vector<float> fvec;
  // for (int i = 0; i < 100000; i++) {
  //   ivec.push_back(i);
  //   fvec.push_back(i * 0.25);
  //   // std::cout << "inserted: " << ivec.at(i) << "and " << fvec.at(i) << std::endl;
  // }
  //
  // ivec.at(5) *= ivec.at(7);
  // // std::cout << "ivec[5] is now: " << ivec.at(5) << std::endl;

  // std::vector<int> vec1(20);
  // std::vector<int> vec2(10, 7);
  // for (int i = 0; i < 10; i++) {
  //   vec2[i] *= 10;
  // }
  // std::cout << "vec2[5]: " << vec2[5] << std::endl;

  // std::vector<std::vector<int> > vec2d;
  // for (int i = 0; i < 8; i++) {
  //   std::vector<int> row;
  //   for (int j = 0; j < 4; j++) {
  //     row.push_back(i * j);
  //   }
  //   vec2d.push_back(row);
  // }

  std::vector<std::vector<int> > vec2d(8);
  for (int i = 0; i < 8; i++) {
    std::vector<int> row(4);
    for (int j = 0; j < 4; j++) {
      row[j * 10] = i * j;
    }
    vec2d[i] = row;
  }

  for (int i = 0; i < vec2d.size(); i++) {
    for (int j = 0; j < vec2d[i].size(); j++) {
      std::cout << "\t" << vec2d[i][j];
    }
    std::cout << std::endl;
  }
}
