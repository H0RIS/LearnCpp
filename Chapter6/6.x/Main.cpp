/*
* Complete the following program:
*/

#include <iostream>

// Write the function getQuantityPhrase() here
std::string_view getQuantityPhrase(int x)
{
    if (x < 0)
    {
        return "negative";
    }
    
    if (x == 0)
    {
        return "no";
    }

    if (x == 1)
    {
        return "a single";
    }
    
    if (x == 2)
    {
        return "a couple of";
    }

    if (x == 3)
    {
        return "a few";
    }

    return "many";
}

// Write the function getApplesPluralized() here
std::string_view getApplesPluralized(int x)
{
    return x == 1 ? "apple" : "apples";
}


int main()
{
    constexpr int maryApples{ 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}