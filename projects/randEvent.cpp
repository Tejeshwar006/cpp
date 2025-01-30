#include <iostream>
#include <ctime>

int main(){

    srand(time(0));
    int randint = rand() % 5 + 1;
    
    switch(randint){
        case 1:
            std::cout << "1";
            break;
        case 2:
            std::cout << "2";
            break;
        case 3:
            std::cout << "3";
            break;
        case 4:
            std::cout << "4";
            break;
        case 5:
            std::cout << "5";
            break;
    }

    return 0;
}