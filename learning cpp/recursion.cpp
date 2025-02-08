#include <iostream>
using namespace std;

int factorial(int n);

int main(){

    //recursion is a function that calls itself
    //recursion is used when a problem can be broken down into smaller subproblems

    //factorial of a number
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << factorial(n);

    return 0;
}

int factorial(int n){
    if(n == 0){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}