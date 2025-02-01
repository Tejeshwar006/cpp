#include <iostream>
using namespace std;

void printInfo(string name, int age);

int main(){

    string name = "John";
    int age = 30;

    printInfo(name, age);

    return 0;
}

// const parameters are used to prevent the function from modifying the argument
//syntax: const data_type parameter_name
void printInfo( const string name,const int age){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}