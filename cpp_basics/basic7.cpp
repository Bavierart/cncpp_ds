#include <iostream>

int main(){

    std::string name;

    while (name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

    int number;

    do {
        std::cout << "Enter a positive integer: ";
        std::cin >> number;
    }while(number < 0);


    for(int i = 1; i <= 3; i++) {
        std::cout << "This is the iteration number " << i << std::endl;
    }


    return 0;
}