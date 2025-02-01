#include <iostream>
using namespace std;

int main(){

    string arr[5]; 
    int size = sizeof(arr)/sizeof(arr[0]);
    string temp;

    for(int i = 0; i < size; i++){
        cout << "enter a string or 'q' to quit: ";
        getline(cin, temp);
        //temp is used to store the user input so q is not shown in the array (its just used to quit the loop)
        if (temp == "q"){
            break;
        } else {
            arr[i] = temp;
        }
    }

    //this shows empty lines in the array if the user quits before filling the array
    // for(string str : arr){
    //     cout << str << endl;
    // }

    // !arr[i].empty() is used to check if the string is empty or not
    // if the string is empty, the loop will break
    for (int i = 0; !arr[i].empty(); i++){
        cout << arr[i] << endl;
    }

    return 0;
}