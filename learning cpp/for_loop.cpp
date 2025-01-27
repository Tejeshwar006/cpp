#include <iostream>

int main(){

    //for loops are used to run a block of code a specific number of times
    //syntax: for(initialization; condition; increment/decrement){code}
    
    for(int i = 1; i <=100; i+=2){
        std::cout << i << std::endl;
    }

    std::cout << "hey" << std::endl;
    return 0;
}