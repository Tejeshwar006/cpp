#include <iostream>

double ctof(double c){
    return (c*9/5) +32;
}

double ftoc(double f){
    return (f-32)* 5/9;
}

int main(){

    char unit;
    float temp;

    std::cout << "enter unit you wait to convert from (C/F)- ";
    std::cin >> unit;
    if (unit == 'C' || unit == 'F'){

        std::cout << "enter temperature- ";
        std::cin >> temp;

        if (unit == 'C'){
            std::cout << ctof(temp) << std::endl;
        }
    else if (unit == 'F') {
        std::cout << ftoc(temp) << std::endl;
    }
    }
    else{
        std::cout << "invaild input" << std::endl;
    }

    return 0;
}