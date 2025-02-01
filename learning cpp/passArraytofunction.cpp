#include <iostream>
using namespace std;

void helloName(string students[]);

int main(){

    string students[] = {"John", "Doe", "Jane", "Doe", "James", "Doe"};
    helloName(students);

    return 0;
}

void helloName(string students[]){
    for(string student : students){
        cout << "hello " << student << endl;
    }
}



