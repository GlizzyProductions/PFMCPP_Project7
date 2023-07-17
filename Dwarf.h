#pragma once
#include "Character.h"
#include "Utility.h"

struct Dwarf : Character
{
    Dwarf (std::string name_, int hp, int armor_, int attackDamage_ = 4 ) : 
    Character( hp, armor_, attackDamage_ ),
    name (name_)
    {
        helpfulItems = makeHelpfulItems(2);
        defensiveItems = makeDefensiveItems(5);
    }
    
    const std::string& getName() override;
    std::string getStats() override;
                 
    private:
        const std::string name;
};
