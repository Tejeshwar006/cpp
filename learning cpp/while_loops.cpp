#include <iostream>

int main(){

    std::string name;

    //syntax: while(condition){code}
    //while loops are used to repeat a block of code until a condition is false

    while(name.empty()){
        std::cout << "enter your name: ";
        std::getline(std::cin,name);
    }

    std::cout << "hello " << name << std::endl;

    //infinite while loop

    while(true){
        std::cout << "hello" << std::endl;
    }

    //this will print "hello" infinitely until the program is stopped manually

    return 0;
}