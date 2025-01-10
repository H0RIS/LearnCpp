/*
* Write a program that asks the user to enter their full name and their age.
* As output, tell the user the sum of their age and the number of characters in their name
* std::string::length() member function to get the length of the string).
* For simplicity, count any spaces in the name as a character.
*/

import std;

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    std::cout << "Your age + length of name is: " <<(age + std::ssize(name));


    return 0;
}