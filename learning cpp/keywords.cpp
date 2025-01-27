#include <iostream>

int main(){

    //break is used to exit the loop
    for(int i = 1; i <=20; i++){
        if(i == 13){
            break;
        }
        std::cout << i << std::endl;
    }

    std::cout << "\n";

    //continue is used to skip the current iteration and move to the next one
    for(int i = 1; i <=20; i++){
        if(i == 13){
            continue;
        }
        std::cout << i << std::endl;
    }

    return 0;
}