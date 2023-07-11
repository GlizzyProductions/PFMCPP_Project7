#pragma once
#include "Character.h"
#include "Utility.h"

struct Dwarf : Character
{

    Dwarf (std::string name_, int hp, int armor_, int attackDamage_ = 4 ) : 
    Character( hp, armor_, attackDamage_ ),
    name (name_)
    {
        
    }
    
    const std::string& getName() override { return name; }
    std::string getStats() override { return getCharacterStats(this); }
                 
    private:
        const std::string name;
};
