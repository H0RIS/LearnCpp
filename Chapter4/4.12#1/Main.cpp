/*
* Write a short program where the user is asked to enter a single character.
* Print the value of the character and its ASCII code, using static_cast.
*/

import std;

int main()
{
    std::cout << "Enter a single character: ";
    char input{};
    std::cin >> input;

    std::cout << "You entered '" << input << "\'" << " which has ASCII code " << static_cast<int>(input) << ".\n";

    return 0;
}
