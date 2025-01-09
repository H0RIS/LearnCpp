/*
* Write a short program to simulate a ball being dropped off of a tower.
* To start, the user should be asked for the height of the tower in meters.
* Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). 
* Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds.
* The ball should not go underneath the ground (height 0).
*/

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
