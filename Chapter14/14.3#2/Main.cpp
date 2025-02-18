/*
Add a new member function to IntPair named isEqual that returns a Boolean indicating whether one IntPair is equal to another.
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

    constexpr bool IsEqual(IntPair& intPair)
    {
        return (x == intPair.x) && (y == intPair.y);
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

    std::cout << "p1 and p1 " << (p1.IsEqual(p1) ? "are equal\n" : "are not equal\n");
    std::cout << "p1 and p2 " << (p1.IsEqual(p2) ? "are equal\n" : "are not equal\n");

    return 0;
}