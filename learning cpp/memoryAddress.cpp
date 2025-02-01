#include <iostream>
using namespace std;

int main(){

    //memory address is the location of a variable in memory
    //to get the memory address of a variable, use the & operator
    string name = "John";
    int age = 30;
    double weight = 70.5;
    bool isMale = true;

    cout << "Memory address of name: " << &name << endl;
    cout << "Memory address of age: " << &age << endl;
    cout << "Memory address of weight: " << &weight << endl;
    cout << "Memory address of isMale: " << &isMale << endl;

    return 0;
}