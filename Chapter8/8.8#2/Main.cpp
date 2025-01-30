/*
Write a program that prints out the letters a through z along with their ASCII codes. Use a loop variable of type char.
*/

import std;

int main()
{
    char i{ 'a' };
    while (i <= 'z')
    {
        std::cout << i << '\t' << (int)i << '\n';
        i++;
    }
}