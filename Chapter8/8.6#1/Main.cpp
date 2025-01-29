/*
Write a function called calculate() that takes two integers and a char representing one of the following mathematical operations: +, -, *, /, or % (remainder).
Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result.
If an invalid operator is passed into the function, the function should print an error message.
For the division operator, do an integer division, and don’t worry about divide by zero.
*/

import std;

void calculate(int x, int y, char op)
{
    switch (op)
    {
    case'+':
    {
        std::cout << x << " + " << y << " = " << x + y << '\n';
        break;
    }
    case'-':
    {
        std::cout << x << " - " << y << " = " << x - y << '\n';
        break;
    }
    case'*':
    {
        std::cout << x << " * " << y << " = " << x * y << '\n';
        break;
    }
    case'/':
    {
        std::cout << x << " / " << y << " = " << x / y << '\n';
        break;
    }
    case'%':
    {
        std::cout << x << " % " << y << " = " << x % y << '\n';
        break;
    }
    default:
        std::cout << "invalid input\n";
        break;
    }
}
int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter an integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Enter an operator(+, -, *, /, %): ";
    char op{};
    std::cin >> op;

    calculate(x, y, op);

    return 0;
}