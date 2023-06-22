
#include<iostream>
#include <array>
const int ROW = 3;
const int COLUMN = 3;
void calcMatrix(
  const std::array<std::array<int, ROW>, COLUMN> A,
  const std::array<std::array<int, ROW>, COLUMN> B,
  std::array<std::array<int, ROW>, COLUMN> &C){
    for (auto i = 0; i < C.size(); i++) {
    for (auto j = 0; j < C[i].size(); j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
}


int main() {
  std::array<std::array<int, ROW>, COLUMN> A;
  std::array<std::array<int, ROW>, COLUMN> B;
  std::array<std::array<int, ROW>, COLUMN> C;
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
  calcMatrix(A, B, C);
  std::cout << "The elements of matrix C are: " << "\n";
  for (const auto &row : C) {
    for (const auto &element : row) {
      std::cout << element << " ";
    }
    std::cout << "\n";
  }
}

