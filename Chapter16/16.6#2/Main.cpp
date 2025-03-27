//
// Update your code for the prior quiz solution so that the following program compiles and has the same output:
//

#include <iostream>
#include <vector>

// Implement printArray() here
template <typename T>
void printArray(const std::vector<T>& arr)
{
    for (int elem : arr)
    {
        std::cout << elem << " ";
    }
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printArray(arr); // use function template to print array

    return 0;
}