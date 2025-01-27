#include <iostream>

int main(){

    std::string name;

    std::cout << "enter name- " << std::endl;
    std::getline(std::cin,name);

    if(name.length()>12) {
        std::cout << "name is too long (only 12 characters allowed)" << std::endl;
    }
    else{
        std::cout << "name is " << name << std::endl;
    }

    return 0;
}