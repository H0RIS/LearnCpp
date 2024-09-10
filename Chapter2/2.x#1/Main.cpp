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

int main()
{
    int num1{ ReadNumber() };
    int num2{ ReadNumber() };

    WriteAnswer(num1 + num2);

    return 0;
}
