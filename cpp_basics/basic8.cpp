#include <iostream>

void happyBirthday(std::string name = "YOU"){
    std::cout << "Happy birthday, " << name << std::endl;

}

int testFunc(int arg1 = 0){
    arg1++;

    return arg1;
}



int main(){

    happyBirthday("Felipe");

    int shouldbe3 = testFunc(2);

    std::cout << shouldbe3 << std::endl;

    return 0;
}
