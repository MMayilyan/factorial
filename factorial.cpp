#include <iostream>
#include <exception>

int factorial(int n) {
  if (n == 0) {
    return 1;
  }

  if (n < 0) {
    throw std::runtime_error("n can not be negative.");
  }

  return n * factorial(n - 1);
}

int main() {
  int n;
  std::cin >> n;
  
  try {
    int fact = factorial(n);
    std::cout << fact;
  } catch (std::exception& ex) {
    std::cout << ex.what() << "\n";
  }
  return 0;
}
