#include <iostream>

int main(){

    std::string car[3];

    car[0] = "Camaro";
    car[1] = "Mustang";
    car[2] = "Camry";

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';

    std::string name = "Felipe Bitencourt";
    double gpa = 2.5;
    char grade = 'S';

    std::cout << "GPA: " << sizeof(gpa) << "bytes\n";
    std::cout << "Name: " << sizeof(name) << "bytes\n";
    std::cout << "grade: " << sizeof(grade) << "bytes\n";





    return 0;
}