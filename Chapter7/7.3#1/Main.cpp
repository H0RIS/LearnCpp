/*
Write a program that asks the user to enter two integers, one named smaller, the other named larger.
If the user enters a smaller value for the second integer, use a block and a temporary variable to swap the smaller and larger values.
Then print the values of the smaller and larger variables.
*/

import std;

int main()
{
    std::cout << "Enter 2 ints: \n";
    int smaller{};
    int larger{};
    std::cin >> smaller >> larger;

    if (larger < smaller)
    {
        std::cout << "Swapping the values\n";

        int temp{ larger };
        larger = smaller;
        smaller = temp;
    }

    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';


    return 0;
}