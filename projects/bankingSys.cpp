#include <iostream>
int money = 5000;

void checkBal();
void deposit(int deposit);
void withdraw(int withdraw);

int main(){

    int dep, with, option;

    while (true){
        std::cout << "*****************\nWelcome to bank of whatever\nselect what you want to do\npress 1 to check balance\npress 2 to deposit money\npress 3 to withdraw money\n*****************\ninput: ";
        std::cin >> option;

        switch(option){
            case 1:
                checkBal();
                break;
            case 2:
                std::cout << "how much money do you want to deposit: ";
                std::cin >> dep;
                deposit(dep);
                break;
            case 3:
                std::cout << "how much money do you want to withdraw: ";
                std::cin >> with;
                withdraw(with);
                break;
            default:
                std::cout << "invalid input\n*****************" << std::endl;
                break;
        }
        std::cout << "do you want to do another transaction? (y/n): ";
        char ans;
        std::cin >> ans;
        if (ans == 'n'){
            break;
        }
    }

    return 0;
}

void checkBal(){
    std::cout << "Your current balance is: " << money << "\n*****************" << std::endl;
}

void deposit(int dep){
    money += dep;
    std::cout << "deposited " << dep << "$\n*****************" << std::endl;
}

void withdraw(int with){
    if(money > with){
        money -= with;
        std::cout << "withdrawn " << with << "$\n*****************" << std::endl;
        }
    else {
        std::cout << "not enough balance to withdraw the amount\n*****************";
        std::cout << "current balance = " << money << "$\n*****************" << std::endl;
    }
}