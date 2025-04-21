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

    if (sunny && temp >= 25) {
        std::cout << "It's sunny and hot, let's turn on the ac.";
    }
    else if (sunny && temp >= 20) {
        std::cout << "So comfortable, let's go for a walk.";
    }
    else if (!sunny || 5 <= temp <= 20){
        std::cout << "Honestly my favourite climate";
    }
    else {
        std::cout << "Not ideal";
    }
    std::cout << std::endl;
    return 0;
}