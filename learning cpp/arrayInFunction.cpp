#include <iostream>
using namespace std;

void printArray(int arr[], int size);

int main (){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    //calling the function to print the array
    //no need to add [] after the array name
    printArray(arr, size);

    return 0;
}

void printArray(int arr[], int size){
    for( int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}