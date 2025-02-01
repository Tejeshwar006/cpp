#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int input;

    cout << "enter the number you want to search for in the array: ";
    cin >> input;

    for(int i = 0; i < size; i++){
        //checks if the number is in the array
        if(arr[i] == input){
        cout << "the number is at index: " << i;
        //breaks the loop if the number is found and ends the program
        return 0;
    }
    }
    
    //if the number is not found in the array then this message will be displayed
    cout << "the number was not found in the array\n";

    return 0;
}