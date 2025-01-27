#include <iostream>

int main() {
    std::string name;
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws,name);
    //getline is used to take input from user with spaces in between the words
    //std::ws is used when we use getline after cin to ignore the white spaces 
    std::cout << "Hello " << name << "!!!" << std::endl;

    int age;
    std::cout << "whats your age??";
    std::cin >> age;
    //std::cin >> age; is used to take input from user
    std::cout << "You are " << age << " years old" << std::endl;
    return 0;
}