/*
You are running a website, and you are trying to calculate your advertising revenue. Write a program that allows you to enter 3 pieces of data:

How many ads were watched.
What percentage of users clicked on an ad.
The average earnings per clicked ad.
Store those 3 values in a struct. Pass that struct to another function that prints each of the values. 
The print function should also print how much you made for that day (multiply the 3 fields together).
*/

import std;


struct AdRev
{
    int adsWatched{};
    int clickPercentage{};
    int avgEarned{};
};

AdRev GetAdRev()
{
    AdRev temp{};
    std::cout << "Enter the number of ads watched today: ";
    std::cin >> temp.adsWatched;
    std::cout << "Enter the percentage of ads clicked: ";
    std::cin >> temp.clickPercentage;
    std::cout << "Enter the average earnings per click: ";
    std::cin >> temp.avgEarned;

    return temp;
}

void PrintAdRev(AdRev a)
{
    std::cout << "Ads Watched: " << a.adsWatched
        << "\nClick Percentage: " << a.clickPercentage
        << "\nAverage Earned: " << a.avgEarned
        << "\nTotal Earned: " << (a.adsWatched * a.clickPercentage / 100 * a.avgEarned);


}

int main()
{
    AdRev ad{ GetAdRev() };
    PrintAdRev(ad);

    return 0;
}