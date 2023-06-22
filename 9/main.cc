
#include <iostream>
#include <array>

const int ROWS = 3;
const int COLS = 3;

void multiplyMatrix(const std::array<std::array<int, COLS>, ROWS> &A, const std::array<std::array<int, COLS>, ROWS> &B, std::array<std::array<int, COLS>, ROWS> &C) {
      for (auto i = 0; i < C.size(); i++) {
            for (auto j = 0; j < C[i].size(); j++) {
                  for (auto k = 0; k < C[i].size(); k++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
              }
        }
}

int main() {
      std::array<std::array<int, COLS>, ROWS> A;
      std::array<std::array<int, COLS>, ROWS> B;
      std::array<std::array<int, COLS>, ROWS> C;
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
      multiplyMatrix(A, B, C);
      std::cout << "The elements of matrix C are: " << std::endl;
      for (const auto &row : C) {
            for (const auto &element : row) {
                  std::cout << element << " ";
              }
            std::cout << std::endl;
        }
}

