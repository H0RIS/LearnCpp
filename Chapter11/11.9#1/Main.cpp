/*
Write a constexpr function template with a non-type template parameter that returns the factorial of the template argument.
*/

import std;

// define your factorial() function template here
template <auto N>
constexpr int factorial()
{
    static_assert(N >= 0);

    int result{ 1 };
    for (int i{ 1 }; i <= N; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    factorial<-3>(); // should fail to compile

    return 0;
}