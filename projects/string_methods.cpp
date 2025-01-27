#include <iostream>

int main(){

    std::string name;

    std::cout << "enter name- ";
    std::getline(std::cin,name);

    if(name.length()>12) {
        //.length() is used to get the length of a string
        std::cout << "name is too long (only 12 characters allowed)" << std::endl;
    }
    else if (name.empty()){
        //.empty() is used to check if a string is empty
        std::cout << "name is empty" << std::endl;
    }
    else{
        std::cout << "your name is " << name << std::endl;

        
        //.insert() is used to insert a string at a specific index
        name.insert(0,"Mr. ");
        std::cout << "hello " << name << std::endl;

        //.append() is used to add a string to the end of another string
        name.append("@hotmail.com");
        std::cout << "your email is " << name << std::endl;
    }

    name.erase(0,4);
    //.at() is used to get the character at a specific index
    std::cout << name.at(0) << " is the first character of your name" << std::endl;

    //.find() is used to find the index of a specific character
    std::cout << name.find("@") << std::endl;

    //.erase() is used to erase a string from a specific index
    //arguments are (index, ending index)
    std::cout << name.erase(name.find("@"),name.length()) << std::endl;

    //.clear() is used to clear the string
    name.clear();
    std::cout << "name variable:" << name << std::endl;
    return 0;
}