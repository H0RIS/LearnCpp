/*
In lesson 13.10 -- Passing and returning structs, we wrote a short program using a Fraction struct.
Convert Fraction from a struct to a class. Convert all of the functions to (non-static) member functions.
*/

import std;

class Fraction
{
public:
    Fraction(int numerator, int denominator);
    ~Fraction();
    void GetFraction();
    Fraction Multiply(const Fraction& f) const;
    void PrintFraction() const;

private:
    int m_numerator{ 0 };
    int m_denominator{ 1 };
};

Fraction::Fraction(int numerator = 0, int denominator = 1)
    : m_numerator{ numerator }
    , m_denominator{ denominator }
{
}

Fraction::~Fraction()
{
}

void Fraction::GetFraction()
{
    std::cout << "Enter a value for numerator: ";
    std::cin >> m_numerator;
    std::cout << "Enter a value for denominator: ";
    std::cin >> m_denominator;
    std::cout << '\n';
}

Fraction Fraction::Multiply(const Fraction& f) const
{
    return Fraction{ m_numerator * f.m_numerator, m_denominator * f.m_denominator };
}

void Fraction::PrintFraction() const
{
    std::cout << m_numerator << '/' << m_denominator << '\n';
}

int main()
{
    Fraction f1{};
    f1.GetFraction();

    Fraction f2{};
    f2.GetFraction();

    std::cout << "Your fractions multiplied together: ";

    f1.Multiply(f2).PrintFraction();

    return 0;
}