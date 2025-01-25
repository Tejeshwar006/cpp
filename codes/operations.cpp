#include <iostream>

int main(){

    int num = 10;
    //num=num+1;
    //num+=2;
    num++;
    std::cout << num << "\n";

    int num2 = 10;
    //num2=num2-1;
    //num2-=2;
    num2--;
    std::cout << num2 << "\n";

    int num3 = 10; 
    // num3 = num3 * 2;
    num3 *= 2;
    std::cout << num3 << "\n";

    int num4 = 10;
    // num4 = num4 / 3;
    num4 /= 3;
    std::cout << num4 << "\n";
    //this will print 3 because 10/3 = 3.3333... but it will be truncated to 3

    double decimal = 10;
    // decimal = decimal % 3;
    decimal /= 3;  
    std::cout << decimal << "\n";
    //this will print 3.3333... because 10/3 = 3.3333... double can store decimal values

    int num5 = 10,remainder;
    remainder = num5 % 3;
    //can be used as num5%=3
    std::cout << remainder << "\n";

    return 0;
}