#include <iostream>
using namespace std;
int main(){

    int marks;

    cout << "enter marks- ";
    cin >> marks;

    /*
    && is logical AND operator
    if(condition1 && condition2){
        //code
    }
    if(condition1 || condition2){
        //code
    }

    || is logical OR operator
    if(condition1 || condition2){
        //code
    }
    
    ! is logical NOT operator
    if(!condition){
        //code
    }
    */

    if(marks >30 && marks < 101){
        cout << "you passed" << endl;
    }
    else if(!(marks > 0)){
        cout << "not possible" << endl;
    }
    else if (marks <31 || marks > 100){
        cout << "either you failed or undefined input" << endl;
    }
    return 0;
}