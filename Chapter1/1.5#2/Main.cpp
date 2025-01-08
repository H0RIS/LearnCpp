/*
    Ask the user to enter three values. The program should then print these values. Add an appropriate comment above function main().
*/

#include <iostream>

int main()
{
    std::cout << "Enter 3 numbers: ";
    int x1{};
    int x2{};
    int x3{};
    std::cin >> x1 >> x2 >> x3;
    std::cout << "You entered " << x1 << ", " << x2 << ", and " << x3 << "." << '\n';

    return 0;
}