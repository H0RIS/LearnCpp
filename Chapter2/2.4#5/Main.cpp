import std;

int GetInt()
{
    std::cout << "Enter an int value:\n";
    int input{};
    std::cin >> input;

    return input;
}

int DoubleNumber(int num)
{
    return num * 2;
}

int main()
{
    int input{ GetInt() };

    std::cout << "Double your number is: " << DoubleNumber(input);

    return 0;
}
