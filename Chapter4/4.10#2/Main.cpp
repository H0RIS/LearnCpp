/*
* Write a program that asks the user to enter a number 0 through 9 (inclusive).
* If the user enters a number within this range that is prime (2, 3, 5, or 7),
* print “The digit is prime”. Otherwise, print “The digit is not prime”.
*/

import std;

bool isPrime(int val)
{
    if (val == 2 || val == 3 || val == 5 || val == 7)
    {
        return true;
    }
    else 
    { 
        return false;
    }
}
int main()
{
    std::cout << "Enter a digit(0-9): ";
    int val{};
    std::cin >> val;

    if (isPrime(val))
    {
        std::cout << "The digit is prime";
    }
    else
    {
        std::cout << "The digit is not prime";
    }

    return 0;
}
