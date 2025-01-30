#include <iostream>

// function declaration
//syntax: return_type function_name(parameters){function body}
//call a function using function_name(parameters);
void printHello(){
    std::cout << "Hello" << std::endl;
}

//function declaration
void printHru(std::string name);

int main(){

    std::string name = "John";

    //function call without parameters
    printHello();
    printHello();

    //function call with parameters
    printHru(name);

    return  0;
}

//function can be declared and defined outside the main function as well
//uses: readability and maintainability
//parameters can be passed to the function. these paramenters are used to perform some operations
void printHru(std::string name){
    std::cout << "How are you " << name << "?" << std::endl;
}