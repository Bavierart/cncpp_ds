#include <iostream>
#include <cmath>

int main(){
    //math funcs

    //double x = 3.99;
    //double y = 4;
    //double z;

    //z = std::max(x,y);
    //z = std::min(x,y);
    //z = pow(2,4);
    //z = sqrt(9);
    //z = abs(-3);
    //z = round(x);
    //z = ceil(x);
    //z = floor(x);
    //more at the cmath docs

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));
    std::cout << c << std::endl;

    
    //conditionals
    
    if(c >= 100){
        std::cout << "That's a pretty big!!" << std::endl;
    }
    else if (c <= 10) {
        std::cout << "That's pretty small!!" << std::endl;
    }
    else {
        std::cout << "So avarage." << std::endl;
    }
    //switches

    int month;
    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    bool valid_month = false;

    while(!valid_month) {
        switch(month){
            case 1:
                std::cout << "January." << std::endl;
                valid_month = true;
                break;
            case 2:
                std::cout << "February." << std::endl;
                valid_month = true;
                break;
            case 3:
                std::cout << "March." << std::endl;
                valid_month = true;
                break;
            case 4:
                std::cout << "April." << std::endl;
                valid_month = true;
                break;
            case 5:
                std::cout << "May." << std::endl;
                valid_month = true;
                break;
            case 6:
                std::cout << "June." << std::endl;
                valid_month = true;
                break;
            case 7:
                std::cout << "July." << std::endl;
                valid_month = true;
                break;
            case 8:
                std::cout << "August." << std::endl;
                valid_month = true;
                break;
            case 9:
                std::cout << "September." << std::endl;
                valid_month = true;
                break;
            case 10:
                std::cout << "October." << std::endl;
                valid_month = true;
                break;
            case 11:
                std::cout << "November." << std::endl;
                valid_month = true;
                break;
            case 12:
                std::cout << "December." << std::endl;
                valid_month = true;
                break;
            default:
                std::cout << "You don't know how to count to 12." << std::endl;
                std::cout << "Enter a month (1-12): ";
                std::cin >> month;
                break;
        }
    }
    
    return 0;
}