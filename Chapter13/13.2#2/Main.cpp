/*
Put the MonsterType enumeration inside a namespace. Then, create a main() function and instantiate a troll. The program should compile.
*/

import std;

namespace Monster
{
    enum MonsterType
    {
        orc,
        goblin,
        troll,
        ogre,
        skeleton,
    };
}

int main()
{

    Monster::MonsterType m1{ Monster::troll };
    std::cout << m1;

    return 0;
}