#include <iostream>
using namespace std;

int main(){

    //multidimentional arrays are arrays of arrays (2D, 3D, 4D, etc)
    //syntax: data_type array_name[size1][size2]...[sizeN];
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    //to get the number of rows and columns in a 2D array
    //sizeof(matrix) gives the size of the whole array
    //sizeof(matrix[0]) gives the size of the first row
    //sizeof(matrix[0][0]) gives the size of the first element in the first row
    int rows =  sizeof(matrix)/sizeof(matrix[0]);
    int cols = sizeof(matrix[0])/sizeof(matrix[0][0]);

    //nested loops are used to iterate through the 2D array
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}