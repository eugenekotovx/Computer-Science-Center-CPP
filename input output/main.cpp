#include <iostream>
#include "square.hpp"

int main()
{
  int i = 42;
  int sq_integer = 1;
  double d = 3.14;
  const char *input_result_string = "Your input result ";
  const char *input_square_result_string = "Your input square function result ";
  std::cout << "Enter an integer and a double:\n";
  std::cin >> i >> d;
  std::cout << "Your input is " << i << ", " << d << "\n";
  std::cout << input_result_string << d * i << "\n";
  std::cout << "Enter integer for square function ";
  std::cin >> sq_integer;
  std::cout << input_square_result_string << square(sq_integer) << "\n";
  return 0;
}