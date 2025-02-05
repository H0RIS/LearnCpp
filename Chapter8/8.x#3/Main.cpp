/*
Implement a game of Hi-Lo. First, your program should pick a random integer between 1 and 100.
The user is given 7 tries to guess the number.
For extra credit: make the minimum and maximum values and the number of guesses a configurable parameter.
*/

#include <iostream>
#include <cstdlib>
#include "Random.h"

void Gameover()
{
    while (true)
    {
        std::cout << "Would you like to play again (y/n)? ";
        char c{};
        std::cin >> c;
        if (c == 'y')
        {
            break;
        }
        else if (c == 'n')
        {
            std::cout << "Thank you for playing.\n";
            std::exit(0);
        }
    }
}
int main()
{
    while (true)
    {
        constexpr int tries{ 5 };
        constexpr int min{1};
        constexpr int max{50};
        const int number{ Random::get(min, max) };
        std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << tries << " tries to guess what it is.\n";

        int i{ 1 };
        while (true)
        {
            std::cout << "Guess #" << i << ": ";
            int guess{};
            std::cin >> guess;

            if (guess == number)
            {
                std::cout << "Correct! You win!\n";
                Gameover();
                break;
            }
            else if (guess < number)
            {
                std::cout << "Your guess is too low.\n";
                i++;
            }
            else if (guess > number)
            {
                std::cout << "Your guess is too high.\n";
                i++;
            }

            if (tries < i)
            {
                std::cout << "Sorry, you lose. The correct number was " << number << ".\n\n";
                Gameover();
                break;
            }
        }
    }
    return 0;
}