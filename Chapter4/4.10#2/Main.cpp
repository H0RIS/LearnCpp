import std;

bool isPrime(int val)
{
    if (val == 2 || val == 3 || val == 5 || val == 7)
    {
        return true;
    }
    else 
    { 
        return false;
    }
}
int main()
{
    std::cout << "Enter a digit(0-9): ";
    int val{};
    std::cin >> val;

    if (isPrime(val))
    {
        std::cout << "The digit is prime";
    }
    else
    {
        std::cout << "The digit is not prime";
    }

    return 0;
}
