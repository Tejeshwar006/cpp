#include <iostream>

int main(){

    // nested loops are loops within loops
    // the inner loop runs completely for each iteration of the outer loop
    // syntax: 
    /*
    loop(){
        loop(){
        
        }
    }
    */

   int row,col;

   std::cout << "enter the num of rows:";
   std::cin >> row;
   std::cout << "enter the num of columns:";
   std::cin >> col;

    for(int i= 1; i < row+1; i++){
        for (int j= 1; j < col+1; j++){
            std::cout << j*i << ",";
        }
        std::cout << "\n";
    }

    return 0;
}