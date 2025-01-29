#include <iostream>

#include <limits>


void printboard(char board[3][3]){
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            std::cout << board[row][col] << " | ";
        }
        std::cout << "\n----------\n";
    }
}

bool isfilled(char board[3][3]){
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if(board[row][col] != 'X' && board[row][col] != 'O'){
                return false;
            }
        }
    }
    return true;
}

char changePlayer(char player){
    if(player == 'X'){
        return 'O';
    } else {
        return 'X';
    }
}

bool win(char board[3][3]){
    for (int row = 0; row < 3; row++) {
        if(board[row][0] == board[row][1] && board[row][1] == board[row][2]){
            return true;
        }
    }

    for (int col = 0; col < 3; col++) {
        if(board[0][col] == board[1][col] && board[1][col] == board[2][col]){
            return true;
        }
    }

    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        return true;
    }

    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        return true;
    }

    return false;
}

int main() {
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    int pos;
    char player = 'X';

    // game loop
     while (!isfilled(board) && !win(board)){
        printboard(board);
        
        std::cout << "enter position(1-9): ";
        std::cin >> pos;
        

        int row = (pos - 1) / 3;
        int col = (pos - 1) % 3;

        if (pos >= 1 && pos <= 9){
            if (!isfilled(board)){ 
                board[row][col] = player;
                player =  changePlayer(player);
            }
        } 
        else {
            std::cout << "invalid input" << std::endl;
        }

    }

    printboard(board);
    std::cout << "Game Over" << std::endl;

    return 0;
}