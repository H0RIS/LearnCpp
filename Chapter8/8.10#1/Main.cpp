/*
Write a for-loop that prints every even number from 0 to 20.
*/

import std;

int main()
{
    for (size_t i = 0; i <= 20; i++)
    {
        if (!(i % 2))
        {
            std::cout << i << '\n';
        }
    }

    return 0;
}