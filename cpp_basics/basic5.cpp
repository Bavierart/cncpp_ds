#include <iostream>

int main() {

    // && and
    // || or
    // ! not

    int temp;

    std::cout << "Enter a temperature (c): ";
    std::cin >> temp;

    bool sunny;

    std::cout << "Is it sunny? (y/n): ";
    std::string tempo_sunny;
    std::cin >> tempo_sunny;
    sunny = tempo_sunny == "y" ? true : false;

    std::cout << "It is " << temp << " degrees";
    if (sunny) 
    {
        std::cout << " and sunny";
    }
    else
    {
        std::cout << " and not sunny";
    }
    std::cout << std::endl;
    return 0;
}