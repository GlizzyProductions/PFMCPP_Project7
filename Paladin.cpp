#include "Paladin.h"

Paladin::Paladin (std::string name_, int hp, int armor_, int attackDamage_) : 
Character( hp, armor_, attackDamage_ ),
name (name_)
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(6);
    attackDamage = 10;
}
  
const std::string& Paladin::getName()
{ 
    return name; 
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
