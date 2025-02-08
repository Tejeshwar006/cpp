#include <iostream>
using namespace std;

int main(){

    //dynamic memory is memory that is allocated at runtime after the program has started
    //dynamic memory is allocated in the heap
    //dynamic memory is allocated using the new keyword
    //dynamic memory is deallocated using the delete keyword
    //dynamic memory is used when we don't know the size of the array at compile time

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    //allocate memory for an array of size elements
    //new operator allocates memory and calls the constructor of a type
    char *pGrades = NULL;
    pGrades = new char[size];
    
    for(int i = 0; i < size; i++){
        cout << "Enter grade " << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        cout << pGrades[i] << " ";
    }

    //deallocate the memory
    //if we don't deallocate the memory, we will have a memory leak
    //delete operator deallocates memory and calls the destructor of a type
    //delete[] operator deallocates memory and calls the destructor of each element in the array
    delete[] pGrades;

    return 0;
}