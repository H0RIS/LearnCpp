//
//Write a short program that prints the elements of the following vector to the screen using a loop:
//

#include <iostream>
#include <vector>

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    // Add your code here
    for (int elem : arr)
    {
        std::cout << elem << " ";
    }

    return 0;
}