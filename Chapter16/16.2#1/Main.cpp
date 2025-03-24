//
// Define a std::vector using CTAD and initialize it with the first 5 positive square numbers (1, 4, 9, 16, and 25).
//

import std;

int main()
{
    std::vector sqNumbers{ 1, 4, 9, 16, 25 };

    for (int number : sqNumbers) 
    {
        std::cout << number << " ";
    }


    return 0;
}