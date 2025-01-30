#include <iostream>
using namespace std;

int main(){

    //sizeOf is used to get the size of a data type in bytes
    //syntax: sizeof(data_type, variable, expression, object or class)

    int num = 10000;
    cout << sizeof(num) << " bytes\n";

    int array[] = {1,2,3,4,5};
    cout << sizeof(array)/sizeof(array[0]) << " elements\n";
    //this trick can be used to get number of elements in an array

    return 0;
}