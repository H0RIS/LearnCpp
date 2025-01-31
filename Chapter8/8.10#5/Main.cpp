/*
Modify the FizzBuzz program you wrote in the previous quiz to add the rule that numbers divisible by seven should be replaced with “pop”.
Run the program for 150 iterations.

In this version, using an if/else chain to explicitly cover every possible combination of words will result in a function that is too long.
Optimize your function so only 4 if-statements are used:
one for each of the non-compound words (“fizz”, “buzz”, “pop”), and one for the case where a number is printed.
*/

import std;

void FizzBuzz(int x)
{
    for (size_t i = 1; i <= x; i++)
    {
        bool hasPrinted{false};
        if (i % 3 == 0)
        {
            std::cout << "Fizz";
            hasPrinted = true;
        }
        if (i % 5 == 0)
        {
            std::cout << "Buzz";
            hasPrinted = true;
        }
        if (i % 7 == 0)
        {
            std::cout << "Pop";
            hasPrinted = true;
        }
        if (!hasPrinted)
        {
            std::cout << i;
            hasPrinted = true;
        }

        std::cout << '\n';

        hasPrinted = false;
    }
}

int main()
{
    FizzBuzz(150);

    return 0;
}