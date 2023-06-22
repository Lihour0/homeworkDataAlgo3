#include <iostream>
#include <array>

const int ROWS = 3;
const int COLS = 3;

void subtractMatrices(const std::array<std::array<int, COLS>, ROWS> &A, const std::array<std::array<int, COLS>, ROWS> &B, std::array<std::array<int, COLS>, ROWS> &C) {
    for (auto i = 0; i < C.size(); i++) {
        for (auto j = 0; j < C[i].size(); j++) {
            C[i][j] = A[i][j] - B[i][j];
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
     subtractMatrices(A, B, C);
    std::cout << "The elements of matrix C are: " << std::endl;
    for (const auto &row : C) {
        for (const auto &element : row) {
            std::cout << element << " ";
        }
        std::cout << "\n";
    }
}

