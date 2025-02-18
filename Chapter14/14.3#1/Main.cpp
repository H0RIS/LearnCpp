/*
Create a struct called IntPair that holds two integers.
Add a member function named print that prints the value of the two integers.
*/

import std;

struct IntPair
{
    int x{};
    int y{};

    void Print()
    {
        std::cout << "Pair(" << x << ", " << y << ")\n";
    }
};

int main()
{
    IntPair p1{ 1, 2 };
    IntPair p2{ 3, 4 };

    std::cout << "p1: ";
    p1.Print();

    std::cout << "p2: ";
    p2.Print();

    return 0;
}