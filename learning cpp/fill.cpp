#include <iostream>
using namespace std;

int main(){

    int size = 99;
    string arr[size];

    //filling the array with the same string
    //syntax: fill(starting index, ending index, value);
    fill(arr, arr + size/3, "hi");
    fill(arr + size/3, arr + size/3*2, "user");
    fill(arr +size/3*2, arr + size, "bye");

    for(string i : arr){
        cout << i << "\n";
    }

    return 0;
}