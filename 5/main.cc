
#include <iostream>
#include <array>

int main() {
  const int ROW = 2;
  const int COLUMN = 2;
  std::array<std::array<int, ROW>, COLUMN> A;
  std::array<std::array<int, ROW>, COLUMN> B;
  std::cout << "Enter the elements of matrix A: ";
  for (auto &row : A) {
    for (auto &element : row) {
      std::cin >> element;
    }
  }
  std::cout << "Enter the elements of matrix B: ";
  for (auto &row : B) {
    for (auto &element : row) {
      std::cin >> element;
    }
  }
  std::cout << "The elements of matrix A are: " << "\n";
  for (const auto &row : A) {
    for (const auto &element : row) {
      std::cout << element << " ";
    }
    std::cout << "\n";
  }
  std::cout << "The elements of matrix B are: " << "\n";
  for (const auto &row : B) {
    for (const auto &element : row) {
      std::cout << element << " ";
    }
    std::cout << "\n";
  }
  return 0;
}

