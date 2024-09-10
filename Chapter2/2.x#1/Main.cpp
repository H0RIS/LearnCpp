import std;

int ReadNumber();
void WriteAnswer(int input);

int main()
{
    int num1{ ReadNumber() };
    int num2{ ReadNumber() };

    WriteAnswer(num1 + num2);

    return 0;
}
