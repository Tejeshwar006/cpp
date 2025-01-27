#include <iostream>

int main(){

    int correct = 9;
    int total=10;

    double percentage = (correct/total)*100;
    std::cout << percentage << "%" << "\n";

    double percentage2 = (correct/(double)total)*100;
    //(variable type)variable_name is used to convert the type of variable to the specified type 
    std::cout << percentage2 << "%" << "\n";

    return 0;
}