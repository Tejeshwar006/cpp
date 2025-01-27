#include <iostream>

int main(){

    //do while loops run a block of code at least once before checking the condition
    //syntax: do{code}while(condition)

    int num;

    do{
        std::cout << "enter a positive number: ";
        std::cin >> num;
    } while(num<0);

    std::cout << "this number is: " << num << std::endl;

    return 0;
}