/*
* Write the following program: The user is asked to enter 2 floating point numbers (use doubles).
* The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
* The program computes the answer on the two numbers the user entered and prints the results.
* If the user enters an invalid symbol, the program should print nothing.
*/

import std;

double askInput()
{
    std::cout << "Enter a double value: ";
    double input{};
    std::cin >> input;

    return input;
}

char askSymbol()
{
    std::cout << "Enter a symbol(+, -, *, or /): ";
    char input{};
    std::cin >> input;

    return input;
}

int main()
{
    double val1{ askInput() };
    double val2{ askInput() };
    char symbol{ askSymbol() };

    double result{};

    if (symbol == '+')
    {
        result = val1 + val2;
    }
    else if(symbol == '-')
    {
        result = val1 - val2;
    }
    else if (symbol == '*')
    {
        result = val1 * val2;
    }
    else if(symbol == '/')
    {
        result = val1 / val2;
    }
    else
    {
        std::cout << "Wrong input\n";
    }

    std::cout <<  val1 << " " << symbol << " " << val2 << " is " << result;

    return 0;
}
