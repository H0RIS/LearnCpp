//
// Using a std::vector, write a program that asks the user to enter 3 integral values.
// Print the sum and product of those values.
//

import std;

int main()
{
    std::cout << "Enter 3 ints: ";

    std::vector<int> v(3);

    for (size_t i = 0; i < 3; i++)
    {
        int temp{};
        std::cin >> temp;
        v[i] = temp;
    }

    std::cout << "Sum of your numbers: " << v[0] + v[1] + v[2]
        << "\nProd of your numbers: " << v[0] * v[1] * v[2]
        << '\n';

    return 0;
}