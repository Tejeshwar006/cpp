#include <iostream>

//function overloading
//function with the same name but different parameters
//return type is not considered
//compiler decides which function to call based on the parameters passed

void hello(){
    std::cout << "Hello" << std::endl;
}

void hello(std::string name){
    std::cout << "Hello " << name << std::endl;
}

int main(){

    std::string name = "John";

    hello();
    hello(name);

    return 0;
}