/*
#1 Write a function template named add() that allows the users to add 2 values of the same type.

#2 Write a function template named mult() that allows the user to multiply one value of any type (first parameter) and an integer (second parameter).
The second parameter should not be a template type. The function should return the same type as the first parameter.
*/

#include <iostream>

// write your add function template here
auto add(auto x, auto y)
{
    return x + y;
}

auto mult(auto x, auto y)
{
    return x * y;
}

int main()
{
    std::cout << add(2, 3) << '\n';
    std::cout << add(1.2, 3.4) << '\n';

    std::cout << mult(2, 3) << '\n';
    std::cout << mult(1.2, 3) << '\n';
    return 0;
}