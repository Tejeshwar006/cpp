#include <iostream>
using namespace std;

void swap(string &cup1, string &cup2);

int main(){

    //pass by value: the value of the variable is passed to the function
    //pass by reference: the memory address of the variable is passed to the function

    string cup1 = "coffee";
    string cup2 = "tea";

    swap(cup1, cup2);

    cout << "cup1: " << cup1 << endl;
    cout << "cup2: " << cup2 << endl;

    return 0;
}

//the cups will not be swapped because pass by value is used
// void swap(string cup1, string cup2){
//     string temp = cup1;
//     cup1 = cup2;
//     cup2 = temp;
// }

//the cups will be swapped because pass by reference is used
void swap(string &cup1, string &cup2){
    string temp = cup1;
    cup1 = cup2;
    cup2 = temp;
}