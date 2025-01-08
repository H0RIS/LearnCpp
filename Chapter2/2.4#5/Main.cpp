/*
Write a complete program that reads an integer from the user,
doubles it using the doubleNumber() function you wrote in the previous quiz question,
and then prints the doubled value out to the console.
*/

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
