//
// Define a std::vector (using an explicit template type argument) to hold the high temperature (to the nearest tenth of a degree) for each day of a year (assume 365 days in a year).
//

import std;

int main()
{
    std::vector<double> temperatures(365);

    for (int number : temperatures)
    {
        std::cout << number << " ";
    }

    return 0;
}