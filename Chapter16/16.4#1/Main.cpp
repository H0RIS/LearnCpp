//
// Write a function that takes two parameters: a std::vector and an index.
// If the index is out of bounds, print an error. If the index is in bounds, print the value of the element.
//

#include <iostream>
#include <vector>

template <typename T>
void printElement(const std::vector<T>& vec, int i)
{
    if (i < 0 || i >= std::ssize(vec))
    {
        std::cout << "Invalid index.\n";
    }
    else
    {
        std::cout << "The element has value: " << vec[i] << '\n';
    }
}

int main()
{
    std::vector v1{ 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector v2{ 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);

    return 0;
}