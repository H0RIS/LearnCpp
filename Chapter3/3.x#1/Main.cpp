#include <iostream>

int readNumber()
{
    std::cout << "Please enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << '\n';
}

int main()
{
    int x{ readNumber() };
    int y{ readNumber() };
    
    int result{ x + y };

    writeAnswer(result);

    return 0;
}