/*
* Write a program that asks the user to enter a number, and then enter a second number.
* The program should tell the user what the result of adding and subtracting the two numbers is
*/

#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int num1{ };
    std::cin >> num1;

    std::cout << "Enter another integer: ";
    int num2{ };
    std::cin >> num2;

    std::cout <<  num1 << " + " << num2 << " is " << num1 + num2 << "." << '\n';
    std::cout <<  num1 << " - " << num2 << " is " << num1 - num2 << "." << '\n';

    return 0;
}