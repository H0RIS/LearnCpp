/*
Define an unscoped enumerated type named MonsterType to choose between the following monster races: orc, goblin, troll, ogre, and skeleton.
*/

import std;


enum Monster
{
    orc,
    goblin,
    troll,
    ogre,
    skeleton,
};

int main()
{

    Monster m1{ troll };
    std::cout << m1;

    return 0;
}