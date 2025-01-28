#include <iostream>

void printboard(char board[3][3]){
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            std::cout << board[row][col] << " | ";
        }
        std::cout << "\n----------\n";
    }
}

int main() {
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    int pos;

    // game loop
    while(true){
        std::cout << "enter position(1-9): ";
        std::cin >> pos;
        switch (pos){
            case 1:
                board[0][0] = 'X';
                break;
            case 2:
                board[0][1] = 'X';
                break;
            case 3:
                board[0][2] = 'X';
                break;
            case 4:
                board[1][0] = 'X';
                break;
            case 5:
                board[1][1] = 'X';
                break;
            case 6:
                board[1][2] = 'X';
                break;
            case 7:
                board[2][0] = 'X';
                break;
            case 8:
                board[2][1] = 'X';
                break;
            case 9:
            board[2][2] = 'X';
            break;
            default:
                std::cout << "position not available" << std::endl;
                break;
        }
        printboard(board);
        
    }

    return 0;
}