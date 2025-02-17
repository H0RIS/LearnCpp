/*
Create a struct to hold a fraction. The struct should have an integer numerator and an integer denominator member.

Write a function to read in a Fraction from the user, and use it to read-in two fraction objects. 
Write another function to multiply two Fractions together and return the result as a Fraction (you don’t need to reduce the fraction). 
Write another function that prints a fraction.
*/

import std;


struct Fraction
{
    int numerator{};
    int denominator{1};
};

Fraction GetFraction()
{
    std::cout << "Enter the numerator of your fraction: ";
    int n{};
    std::cin >> n;

    std::cout << "Enter the denominator of your fraction: ";
    int d{};
    std::cin >> d;

    Fraction fraction{ n, d };
    return fraction;
}

Fraction MultiplyFraction(Fraction x, Fraction y)
{
    return { x.numerator * y.numerator, x.denominator * y.denominator };
}

void PrintFraction(Fraction f)
{
    std::cout << f.numerator << "/" << f.denominator;
}

int main()
{
    Fraction f1{ GetFraction() };
    Fraction f2{ GetFraction() };

    std::cout << "Your fractions multiplied together: ";

    PrintFraction(MultiplyFraction(f1, f2));

    return 0;
}