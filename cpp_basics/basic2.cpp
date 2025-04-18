//more basics
#include <iostream>

int main(){

    int number = 20;

    //arithmetic operators
    //pemdas order
    /*
    soma
    number = number + 1;
    number += 1;
    number ++;
    */

    /*
    number = number - 1;
    number -= 1;
    number --;
    */
    
    /*
    number = number * 2;
    number *= 2;
    */

    /*
    number = number / 2;
    number /= 2;
    */

    // int remainder = students % 3

    //5 + 4 then * 3 then 6 - the result
    //number = 6 - (5 + 4) * 3;

    std::cout << number << std::endl;


    //type conversion
    //implicit = auto
    //explicit = precede val with new data type

    double x = (int) 3.14;

    std::cout << x << std::endl;
    //if no (int) out = 3.14
    //out = 3


    char ch = 100;
    std::cout << ch << std::endl;
    // == std::cout << (char) 100;
    //return the value equ to 100 in the ASCII table

    //getting user input

    //cout << (insertion operator)
    //cin >> (extraction operator)

    std::cout  << "How old are you" << std::endl;
    int age;
    std::cin >> age;
    
    //cin - > getline
    //the new line char is still on the buffer
    //you need to add >> std::ws to get the white spaces
    //and eliminate them from the buffer

    //cin doesn't get any blank chars like spaces
    std::cout  << "What's your full name?" << std::endl;
    std::string name;
    //this gets the blanks as well (untill enter)
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello" << name << std::endl;
    std::cout << "You are " << age << " years old." << std::endl; 
    



    return 0;
}