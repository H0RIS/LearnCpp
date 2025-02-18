/*
In designing a game, we decide we want to have monsters, because everyone likes fighting monsters.
Declare a struct that represents your monster. The monster should have a type that can be one of the following:
an ogre, a dragon, an orc, a giant spider, or a slime.

Each individual monster should also have a name (use a std::string),
as well as an amount of health that represents how much damage they can take before they die.
Write a function named printMonster() that prints out all of the struct’s members.
Instantiate an ogre and a slime, initialize them using an initializer list, and pass them to printMonster().
*/

import std;

enum MonsterType
{
    ogre,
    dragon,
    orc,
    giantSpider,
    slime,
};

struct Monster
{

    MonsterType type{};
    std::string name{};
    int health{};

};

constexpr std::string_view GetMonsterType(MonsterType type)
{
    switch (type)
    {
    case MonsterType::ogre:          return "Ogre";
    case MonsterType::dragon:        return "Dragon";
    case MonsterType::orc:           return "Orc";
    case MonsterType::giantSpider:   return "Giant Spider";
    case MonsterType::slime:         return "Slime";
    }

    return "Unknown";
}

void PrintMonster(Monster& monster)
{
    std::cout << "This " << GetMonsterType(monster.type) << " is named " << monster.name << " and has " << monster.health << " hp.\n";
}

int main()
{
    Monster m1{ ogre, "Torg", 145 };
    PrintMonster(m1);

    Monster m2{ slime, "Blurp", 23 };
    PrintMonster(m2);

    return 0;
}