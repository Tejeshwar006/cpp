#include <iostream>
using namespace std;

int main(){

    //pointer is a variable that stores the memory address of another variable
    //& is the address of operator
    //* is the dereference operator
    //derefrence operator is used to get the value stored at the memory address stored in a pointer
    //syntax: data_type *pointer_name = &variable_name;

    string name = "John";
    int age = 25;
    string friends[] = {"Alice", "Bob", "Charlie"};
    

    string *pName = &name;
    int *pAge = &age;
    //string *pFriends = &friends; //array is already a pointer, so no need to use &
    string *pFriends = friends;

    cout << "Name Address: " << pName << endl; //pName stores the memory address of name
    cout << "Name: " << *pName << endl; //*pName gets the value stored at the memory address stored in pName
    cout << "Age Address: " << pAge << endl;
    cout << "Age: " << *pAge << endl;
    cout << friends << endl; //prints the memory address of the first element of the array
    cout << *pFriends << endl; //prints the value stored at the memory address stored in pFriends

    return 0;
}