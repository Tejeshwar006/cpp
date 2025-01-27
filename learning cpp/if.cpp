#include <iostream>

int main(){

    int age;
    
    std::cout << "enter your age- ";
    std::cin >> age;

    /* 
    syntax:
    if(condition){
        code block;
    }
    else if(condition){
        code block;
    }
    else:
        code block;
    }
     */

    if(age >=18){
        std::cout << "you can enter the site" << std::endl;
    }
    //checks if the statement is ture then runs the code block if not then checks the next statement
    else if(age >= 13){
        std::cout << "you can enter the site but you need to ask your parents" << std::endl;
    }
    //is checked if the first statement is false
    else if(age <0){
        std::cout << "you haven't been born yet" << std::endl;
    }
    //multiple else if statements can be used
    else{
        std::cout << "you can't enter the site" << std::endl;
    }
    //if none of the above statements are true then this code block is run

    return 0;
}