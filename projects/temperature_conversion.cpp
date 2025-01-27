#include <iostream>

int main(){

    char unit;
    double temp;

    std::cout << "enter unit you wait to convert from (C/F)- ";
    std::cin >> unit;
    if (unit == 'C' || unit == 'F'){

        std::cout << "enter temperature- ";
        std::cin >> temp;

        if (unit == 'C'){
            std::cout << "temperature in F is " << (temp * 9.0/5.0) + 32 << std::endl;
        }
    else if (unit == 'F') {
        std::cout << "temperature in C is " << (temp - 32) * (5.0/9.0) << std::endl;
    }
    }
    else{
        std::cout << "invaild input" << std::endl;
    }

    return 0;
}