/*
Write a program so that it outputs like this:
    Enter an integer: 4
    Double 4 is: 8
    Triple 4 is: 12
*/

#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int num{ };
    std::cin >> num;

    std::cout << "Double " << num << " is: " << num * 2 << '\n';
    std::cout << "Triple " << num << " is: " << num * 3 << '\n';

    return 0;
}