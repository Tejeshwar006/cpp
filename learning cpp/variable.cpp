#include <iostream>

int main(){

    int x;//declaration
    x = 5;//initialization
    int y = 20;

    std::cout << x << "\n";
    std::cout << y << "\n";

    //integer - int
    //floating point - float or double (double is more precise)
    //character - char (single character) or string (multiple characters)
    //boolean - bool (true or false) 
    std::string sentence = "hello guys";
    std::string day = "sunday";
    std::string month = "july";

    std::cout << sentence << " it is " << day << " of " << month << "\n";

    //contants - 'const' keyword is used to declare a constant variable
    const double pi = 3.14159;
    double radius = 20;
    double circumfrence = 2* pi * radius;

    std::cout << "circumfrence of circle = " << circumfrence << "\n";

    return 0;
}