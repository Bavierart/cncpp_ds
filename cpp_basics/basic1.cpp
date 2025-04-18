#include <iostream>
#include <vector>

//constructiong a type
typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//now any string can be declared as
// text_t my_string = "String"
//same thing as the typedef keyword, but more applicable
using text_t = std::string;

//namespaces are places to put on names =)

namespace first_namespace{
    int x = 1;
}

namespace second_namespace {
    int x = 2;
}


int main() {

    //console output
    std::cout << "Hello world!" << std::endl;
    /*
        Multiline comment
    */
    //inline comment

    //variable declaration
    //2 steps
    int x;
    x = 5;
    //1 step
    int y = 6;

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    //types
    //integer
    int n = 1;
    //floating point number
    double nn = 1.1;
    //single character
    char a = 'A';
    //boolean
    bool is_alive = true;
    //strings
    std::string name = "Felipe";

    //printing concatenated str
    std::cout << "Hello" << name << std::endl;


    //the const keyword defines something immutable
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;

    //using a namespace
    std::cout << first_namespace::x << std::endl;
    std::cout << second_namespace::x <<std::endl;
    using namespace first_namespace;
    // x now = 1
    std::cout << x << std::endl;
    //std is a namespace, but using it might cause some trouble in 
    //declaring common named variables



    return 0;
}