#include <iostream>

double area(double length, double width){
    //returns the value of the expression to the caller
    //return type is double
    return length * width;
    }

std::string helloName(std::string name){
    return "Mr. " + name;
}

int main(){

    double len,wid;
    std::cout << "Enter length: ";
    std::cin >> len;
    std::cout << "Enter width: ";
    std::cin >> wid;
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    //function call with parameters
    //function returns a value
    std::cout << "area:" << area(len,wid) << std::endl;

    std::cout << "Hello " << helloName(name) << std::endl;

    return 0;
}