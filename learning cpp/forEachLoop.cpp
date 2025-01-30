#include <iostream>
using namespace std;

int main(){

    string students[] = {"John", "Doe", "Jane", "Doe", "James", "Doe"};

    // for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
    //     cout << students[i] << endl;
    // }

    //forEach loop
    //syntax: for(data_type variable : array_name){ code }
    for(string student : students){
        cout << student << endl;
    }

    return 0;
}