#pragma once
#include "Character.h"
#include "Utility.h"

struct Paladin : Character
{
    Paladin (std::string name_, int hp, int armor_, int attackDamage_ = 10 ) : 
    Character( hp, armor_, attackDamage_ ),
    name (name_)
    {
        helpfulItems = makeHelpfulItems(2);
        defensiveItems = makeDefensiveItems(6);
        padding[0] = 0;
    }
    
    const std::string& getName() override { return name; }
    std::string getStats() override { return getCharacterStats(this); }

private:
    char padding[8];
    const std::string name;
};
