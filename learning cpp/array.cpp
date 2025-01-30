#include <iostream>
using namespace std;

int main(){

    //array are used to store multiple values of same data type
    //array is a collection of similar data types
    //syntax: data_type array_name[size_of_array] = {value1, value2, value3, ...};
    //index of array starts from 0
    //array_name[index] = value;

    int array[] = {1,2,3,4,5,6,7,8,9};

    array[0] = 99; //this will change the value of the first element of the array

    cout << array << "\n"; //this will print the address of the first element of the array
    cout << array[0] << "\n"; //this will print the first element of the array


    return 0;
}