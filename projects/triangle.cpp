#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double h,b,p; //declaration of variables

    cout << "enter length of base of triangle: ";
    cin >> b;
    cout << "enter height of triangle:";
    cin >> h;
    //taken input from user

    p = sqrt(pow(h,2) + pow(b,2)); //calculating hypotenuse of triangle
    cout << "hypotenuse of triangle is: " << p << "\n";
    //displaying output

    return 0;
}