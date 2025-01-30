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

bool isIntegerInput(int &pos) {
    std::cout << "Enter a position (1-9): ";

    if (!(std::cin >> pos)) {  // Check if input is not an integer
        std::cin.clear();  // Clear the error flag
        std::cin.ignore(1000, '\n');  // Discard invalid input
        std::cout << "Invalid input! Please enter a number between 1 and 9." << std::endl;
        return false;
    }

    if (pos >= 1 && pos <= 9) {
        return true;
    } else {
        std::cout << "Invalid range! Enter a number between 1 and 9." << std::endl;
        return false;
    }
}

int main() {
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char player = 'X';
    int pos;

    // Game loop
    while (!isfilled(board) && !win(board)) {
        printboard(board);
        
        while (!isIntegerInput(pos));  

        int row = (pos - 1) / 3;
        int col = (pos - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            std::cout << "Position already occupied! Choose a different one.\n";
            continue;
        }

        board[row][col] = player;
        player = changePlayer(player);
    }

    printboard(board);
    
    if (win(board)) {
        std::cout << "Player " << changePlayer(player) << " won" << std::endl;
    } else {
        std::cout << "draw" << std::endl;
    }

    return 0;
}