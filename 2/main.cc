#include <iostream>
#include <string>


struct Student {
    std::string id;
    std::string name;
    std::string gender;
    int cpp;
    int math;
    int web;
    int graphic;
    int dbms;
    double average;
};

int main() {
    const int SIZE = 1;
    Student students[SIZE];
    for (auto &i: students) {
        std::cout << "ID: ";
        std::cin >> i.id;
        std::cout << "Name: ";
        std::cin >> i.name;
        std::cout << "Gender (M/F): ";
        std::cin >> i.gender;
        std::cout << "Math score: ";
        std::cin >> i.math;
        std::cout << "C++ score: ";
        std::cin >> i.cpp;
        std::cout << "Web score: ";
        std::cin >> i.web;
        std::cout << "Graphic score: ";
        std::cin >> i.graphic;
        std::cout << "DBMS score: ";
        std::cin >> i.dbms;

        i.average = (i.math + i.cpp + i.web + i.graphic + i.dbms) / 5.0;
    }
    std::cout << "ID\tName\tMath\tC++\tWeb\tGraphic\tDBMS\tAverage" << "\n";
    for (const auto &i: students) {
        std::cout << i.id << "\t" << i.name << "\t" << i.math << "\t" << i.cpp << "\t" << i.web << "\t" << i.graphic << "\t" << i.dbms << "\t" << i.average << "\n";
    }

    return 0;
}

