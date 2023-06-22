#include <iostream>
#include <array>
#include <string>

const int SIZE = 10;

struct Customer {
    std::string cus_id;
    std::string meter_code;
    int oldnum;
    int newnum;
};

int main() {
    std::array<Customer, SIZE> customers;

    for (Customer &c : customers) {
        std::cout << "Enter cus_id: ";
        std::cin >> c.cus_id;
        std::cout << "Enter meter_code: ";
        std::cin >> c.meter_code;
        std::cout << "Enter oldnum: ";
        std::cin >> c.oldnum;
        std::cout << "Enter newnum: ";
        std::cin >> c.newnum;
    }

    std::cout << "cus_id\tmeter_code\toldnum\tnewnum\n";
    for (const Customer &c : customers) {
        std::cout << c.cus_id << "\t" << c.meter_code << "\t" << c.oldnum << "\t" << c.newnum << "\n";
    }

}

