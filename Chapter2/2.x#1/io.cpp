import std;

int ReadNumber()
{
    std::cout << "Enter an int: ";
    int input{};
    std::cin >> input;

    return input;
}

void WriteAnswer(int input)
{
    std::cout << "Sum is: " << input << std::endl;
}
