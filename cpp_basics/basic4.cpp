#include <iostream>

int main() {

    int grade;
    std::cout << "What's your grade?:  ";
    std::cin >> grade;

    //ternary operator
    int approved = grade >= 5.75 ? true : false;

    std::string message_approving = approved ? "You are approved!" : "Too bad...";

    std::cout << message_approving << std::endl;

    return 0;
}