/*
* Write a program that asks for the name and age of two people, then prints which person is older.
*/

import std;

int main()
{
    std::cout << "Enter the name of person #1: ";
    std::string name1{};
    std::getline(std::cin >> std::ws, name1);

    std::cout << "Enter the age of: " << name1 << ": ";
    int age1{};
    std::cin >> age1;

    std::cout << "Enter the name of person #2: ";
    std::string name2{};
    std::getline(std::cin >> std::ws, name2);

    std::cout << "Enter the age of: " << name2 << ": ";
    int age2{};
    std::cin >> age2;

    if (age1 > age2)
    {
        std::cout << name1 << "(age " << age1 << ")" << "is older than " << name2 << "(age " << age2 << ")";
    }
    else if (age2 > age1)
    {
        std::cout << name2 << "(age" << age2 << ")" << "is older than " << name1 << "(age " << age1 << ")";
    }
    else
    {
        std::cout << name1 << "(age " << age1 << ")" << "is the same age as " << name2 << "(age " << age2 << ")";
    }

    return 0;
}