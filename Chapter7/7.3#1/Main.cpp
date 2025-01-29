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