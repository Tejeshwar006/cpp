#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    int i = 0;

    while(i<1000){
        int num = rand() % 100 + 1;
        std::cout << num << std::endl;
        i++;
    }

    return 0;
}