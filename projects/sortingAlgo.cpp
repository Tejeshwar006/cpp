#include <iostream>
using namespace std;



int main(){

    int arr[] = {5,1,3,2,4,8,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp;

    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size - 1; j++){
            if (arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                }
            }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}