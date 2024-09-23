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
