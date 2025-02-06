/*
Update your previous solution to handle invalid guesses (e.g. ‘x’), out of bounds guesses (e.g. 0 or 101),
or valid guesses that have extraneous characters (e.g. 43x).
Also handle the user entering extra characters when the game asks them whether they want to play again.
*/

#include <iostream>
#include <cstdlib>
#include "Random.h"

int GetGuess(int i, int min, int max)
{
    while (true)
    {
        std::cout << "Guess #" << i << ": ";

        int guess{};
        std::cin >> guess;

        bool success{ std::cin };
        std::cin.clear(); // put us back in 'normal' operation mode (if needed)
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove any extra input

        // If we didn't extract anything or the extracted guess is out of bounds, try again
        if (!success || guess < min || guess > max)
        {
            std::cout << "Invalid guess! Please enter a number between " << min << " and " << max << '\n';
            continue;
        }

        return guess;
    }
}

void Gameover()
{
    while (true)
    {
        std::cout << "Would you like to play again (y/n)? ";
        char c{};
        std::cin >> c;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

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

void PlayGame(const int tries, const int min, const int max)
{
    const int number{ Random::get(min, max) };
    std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << tries << " tries to guess what it is.\n";

    int i{ 1 };
    while (true)
    {
        int guess{ GetGuess(i, min, max) };

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

int main()
{
    while (true)
    {
        constexpr int tries{ 5 };
        constexpr int min{ 1 };
        constexpr int max{ 50 };
        PlayGame(tries, min, max);
    }

    return 0;
}