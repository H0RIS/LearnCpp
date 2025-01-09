/*
* Modify the program you wrote for quiz #1 to use implicit type conversion instead of static_cast.
*/

import std;

int main()
{
    std::cout << "Enter a single character: ";
    char input{};
    std::cin >> input;

    int intInput = input;

    std::cout << "You entered '" << input << "\'" << " which has ASCII code " << intInput << ".\n";

    return 0;
}
