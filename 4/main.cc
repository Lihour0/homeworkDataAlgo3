#include <iostream>
#include <array>

int main() {
  const int ROW = 3;
  const int COLUMN = 3;
  std::array<std::array<int, ROW>, COLUMN> arr;
  std::cout << "Enter the elements of the array: ";
  for (auto &row : arr) {
    for (auto &element : row) {
      std::cin >> element;
    }
  }
  std::cout << "The elements of the array are: " << "\n";
  for (const auto &row : arr) {
    for (const auto &element : row) {
      std::cout << element << " ";
    }
    std::cout << "\n";
  }
}


