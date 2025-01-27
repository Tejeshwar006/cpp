#include <iostream>

int main(){

    //ternary operator is a shorthand way of writing an if else statement
    //?: is the symbol for the ternary operator
    //syntax: condition ? code block if true : code block if false
    //the condition is checked if it is true then the code block after the ? is run if it is false then the code block after the : is run

    int num;

    std::cout << "enter a number- ";
    std::cin >> num;

    num % 2 == 1 ? std::cout << "odd number\n" : std::cout << "even number\n";
    //same code can be written as-
    std::cout << (num % 2 ==1 ? "odd number\n" : "even number\n");

    return 0;
}