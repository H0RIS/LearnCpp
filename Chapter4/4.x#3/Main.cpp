import std;

const double GRAVITY{ 9.81 };

double AskHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double input{};
    std::cin >> input;

    return input;
}

double DistanceFallenAfterXSeconds(double seconds)
{
    double distanceFallen = GRAVITY * (seconds * seconds) / 2;

    return distanceFallen;
}

void PrintHeight(double initialHeight)
{
    double currentHeight{ initialHeight };

    int i{ 0 };
    while (true)
    {
        currentHeight = initialHeight - DistanceFallenAfterXSeconds(i);
        if (currentHeight < 0)
        {
            std::cout << "At " << i << " seconds, the ball is on the ground.\n";
            
            return;
        }
        
        std::cout << "At " << i << " seconds, the ball is at height: " << currentHeight << " meters.\n";
        
        i++;
    }
}

int main()
{
    double initialHeight{ AskHeight() };
    PrintHeight(initialHeight);
    
    return 0;
}
