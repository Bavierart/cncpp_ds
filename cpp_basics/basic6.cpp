#include <iostream>

int main() {
    //string methods
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin , name);

    if (name.length() > 12) {
        std::cout << "Your name can't be over 12 characters." << std::endl;
    }
    else if (name.empty()){
        std::cout << "Your name can't be empty." << std::endl;
    }
    else {
        std::cout << "Welcome " << name << "!" << std::endl;
    }

    std::cout << "The first letter of your name is " << name.at(0) << std::endl;
    name.insert(0, "@");
    std::cout << name << std::endl;

    std::cout << "The first white space, if any is at: " << name.find(' ') << std::endl;

    //eliminate from 0 to 2, 3 not included
    name.erase(0,3);
    
    name.append("@gmail.com");
    std::cout << "Your user is: " << name << std::endl;


    name.clear();

    std::cout << "(.clear()) Hello " << name << std::endl;



    return 0;
}