#include <iostream>

int main(){
    
    int month;
    
    std::cout << "enter the month number- ";
    std::cin >> month;

    /* 
    switches are used to check the value of a variable and run the code block
    that corresponds to the value of the variable 

    syntax:
    switch(variable){
        case value1:
            code block;
            break;
        case value2:
            code block;
            break;
        .
        .
        .
        default:
            code block;
    }
     */
    switch(month){
        case 1:
            std::cout << "january" << std::endl;
            break;
        case 2:
            std::cout << "feburary" << std::endl;
            break;
        case 3:
            std::cout << "march" <<std::endl;
            break;
        case 4:
            std::cout << "april" << std::endl;
            break;
        case 5:
            std::cout << "may" << std::endl;
            break;
        case 6:
            std::cout << "june" << std::endl;
            break;
        case 7:
            std::cout << "july" << std::endl;
            break;
        case 8:
            std::cout << "august" << std::endl;
            break;
        case 9:
            std::cout << "september" << std::endl;
            break;
        case 10:
            std::cout << "october" << std::endl;
            break;
        case 11:
            std::cout << "november" << std::endl;
            break;
        case 12:
            std::cout << "december" << std::endl;
            break;
        default:
            std::cout << "enter only numbers between 1 and 12" << std::endl;
    }

    return 0;
}