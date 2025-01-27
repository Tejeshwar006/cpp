#include <iostream>
#include <cmath>

int main(){

    double num1, num2;
    char opr;

    std::cout << "enter a number- ";
    std::cin >> num1;
    std::cout << "enter another number- ";
    std::cin >> num2;
    std::cout << "enter an operator (+, -, *, / or ^) - ";
    std::cin >> opr;

    switch(opr){
        case '+':
            std::cout << num1+num2 << std::endl;
            break;
        case '-':
            std::cout << num1-num2 << std::endl;
            break;
        case '*':
            std::cout << num1*num2 << std::endl;
            break;
        case '/':
            std::cout << num1/num2 << std::endl;
            break;
        case '^':
            std::cout << pow(num1,num2) << std::endl;
            break;
        default:
            std::cout << "only enter +, -, *, / or ^" << std::endl;
    }

    return 0;
}