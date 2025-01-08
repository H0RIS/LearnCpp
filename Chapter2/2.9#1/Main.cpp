/*
* Write a program with 2 cpp files.
* One should contain the main() function,
* the other contains the getInteger() function.
*/

#include <iostream>

int getInteger();

int main()
{
    int x{ getInteger() };
    int y{ getInteger() };

    std::cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}