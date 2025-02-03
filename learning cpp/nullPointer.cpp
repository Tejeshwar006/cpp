#include <iostream>
using namespace std;

int main(){

    //null pointer is a pointer that does not point to any memory location
    //it is used to initialize pointers when they are not assigned any memory address
    //syntax: data_type *pointer_name = nullptr;

    int *pointer = nullptr; //initialize a null pointer
    int x = 1;
    pointer = &x; //assign memory address of x to pointer

    if(pointer == nullptr){
        cout << "Pointer is null\n";
    } else {
        cout << "Pointer is not null\n";
    }

    cout << *pointer;

    return 0;
}