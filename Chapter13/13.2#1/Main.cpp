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