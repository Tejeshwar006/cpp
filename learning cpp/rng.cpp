#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    int num = rand() % 100;
    std::cout << num;

    return 0;
}