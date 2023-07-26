//Dwarf.cpp
#include "Dwarf.h"

Dwarf::Dwarf(std::string name_, int hp, int armor_, int attackDamage_) : 
Character( hp, armor_, attackDamage_ ),
name (name_)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(5);
}

const std::string& Dwarf::getName()
{ 
    return name; 
}

std::string Dwarf::getStats()
{ 
    return getCharacterStats(this); 
}
