#include <iostream>
using namespace std;

template <typename T>

T xxx(T a, T b){
    return a > b ? a : b;
}

int main(){

    std::cout << xxx('x', 't') << std::endl;

    return 0;
}