#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));
    int num = rand() % 1000 + 1;
    int guess;

    while (true){
        std::cout << "guess a number from 1-1000:";
        std::cin >> guess;

        if (guess == num){
            std::cout << "you guess it right" << std::endl;
            break;
        }
        else if (guess < num){
            std::cout << "your guess is low" << std::endl;
        }
        else if (guess > num){
            std::cout << "your guess is high" << std::endl;
        }
        else{
            std::cout << "invalid input" << std::endl;
        }
    }
    

    return 0;
}