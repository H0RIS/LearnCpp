/*
Now make the numbers print like this:
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/

import std;

int main()
{
    int outer{ 1 };
    while (outer <= 5)
    {
        int inner{5};
        while (inner > outer)
        {
            std::cout << "   ";
            --inner;
        }

        int temp{ outer };
        while (temp > 0)
        {
            std::cout << " " << temp << " ";
            --temp;
        }

        std::cout << "\n";

        ++outer;
    }

    return 0;
}