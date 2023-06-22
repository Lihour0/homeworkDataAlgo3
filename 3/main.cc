
#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (auto &i : arr) {
        std::cin >> i;
    }
    std::cout << "The elements of the array are: ";
    for (const auto &i: arr) {
        std::cout << i << "\n";
    }
}

