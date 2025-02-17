/*
Define an enum class named Animal that contains the following animals: pig, chicken, goat, cat, dog, duck.
Write a function named getAnimalName() that takes an Animal parameter and uses a switch statement to return the name for that animal as a std::string_view (or std::string if you’re using C++14). 
Write another function named printNumberOfLegs() that uses a switch statement to print the number of legs each animal walks on.
Make sure both functions have a default case that prints an error message.
Call printNumberOfLegs() from main() with a cat and a chicken.
*/

import std;

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

constexpr std::string_view GetAnimalName(Animal animal)
{
    using enum Animal;

    switch (animal)
    {
    case pig:
        return "pig";
    case chicken:
        return "chicken";
    case goat:
        return "goat";
    case cat:
        return "cat";
    case dog:
        return "dog";
    case duck:
        return "duck";
    default:
        return "???";
    }
}

void PrintNumberOfLegs(Animal animal)
{
    using enum Animal;

    int legs{};
    switch (animal)
    {
    case pig:
        legs = 4;
        break;
    case chicken:
        legs = 2;
        break;
    case goat:
        legs = 4;
        break;
    case cat:
        legs = 4;
        break;
    case dog:
        legs = 4;
        break;
    case duck:
        legs = 2;
        break;
    default:
        legs = 0;
        break;
    }
    std::cout << "A " << GetAnimalName(animal) << " has " << legs << " legs.\n";
}

int main()
{
    PrintNumberOfLegs(Animal::cat);
    PrintNumberOfLegs(Animal::chicken);

    return 0;
}