#include <iostream>

std::string name = "Gerg";

void printName();

int main(){

    //local variable
    //variable declared inside a function
    //scope is limited to the function
    std::string name = "John";

    //scope resolution operator ::
    //accesses the global variable name instead of the local variable name
    std::cout << "Hello " << ::name /* here global variable was accessed instead of "John" */ << std::endl;

    printName();

    return 0;
}

void printName(){
    //two local variables with the same name in different functions are allowed
    //when local variable is declared with the same name as a global variable, the local variable takes precedence
    //when local variable goes out of scope, the global variable is accessible
    //try commenting out the local variable in the main function and see the output

    std::string name = "Henry";
    std::cout << "Hello " << name << std::endl;
}

//error: ‘name’ was not declared in this scope
//name is not accessible in this function
// void printName(){
//     std::cout << "Hello " << name << std::endl;
// }