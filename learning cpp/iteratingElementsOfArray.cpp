#include <iostream>
using namespace std;

int main(){

    string students[] = {"John", "Doe", "Jane", "Doe", "James", "Doe"};

    //prints out 0th element of the array
    cout << students[0] << endl;

    //prints out all elements of the array
    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        cout << students[i] << endl;
    }

    return 0;
}