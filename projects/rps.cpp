#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int computerchoice();
void mainmenu();

int main() {
    int user;

    while(true){
        mainmenu();
        cin >> user;
    
        int comp = computerchoice();
        string compchoice = (comp == 1) ? "rock" : (comp == 2) ? "paper" : "scissors";
        if(user == comp){
            cout << "--It's a tie\n";
        } else if ((user == 1 && comp == 3) || (user == 2 && comp == 1) || (user == 3 && comp == 2)){
            cout << "Computer chose " << compchoice << "\n--You win\n";
        } else if((user == 1 && comp == 2) || (user == 2 && comp == 3) || (user == 3 && comp == 1)){
            cout << "Computer chose " << compchoice << "\n--You lose\n";
        }
        else {
            cout << "Thanks for playing\n****************************\n";
            return 0;
        }
    }
    
    return 0;
}

int computerchoice(){
    srand(time(0));
    return rand() % 3 + 1;
}

void mainmenu(){
    cout << "****************************\n";
    cout << "*      Rock Paper Scissors *\n";
    cout << "****************************\n";
    cout << "* 1. Rock                  *\n";
    cout << "* 2. Paper                 *\n";
    cout << "* 3. Scissors              *\n";
    cout << "* any other key to Quit    *\n";
    cout << "****************************\n";
    cout << "Enter your choice: ";
}