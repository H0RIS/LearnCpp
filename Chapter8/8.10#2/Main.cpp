/*
Write a function named sumTo() that takes an integer parameter named value,
and returns the sum of all the numbers from 1 to value.
*/

import std;

int SumTo(int x)
{
    int result{};
    for (size_t i = 1; i <= x; i++)
    {
        result += i;
    }
    return result;
}

int main()
{

    std::cout << SumTo(5);

    return 0;
}