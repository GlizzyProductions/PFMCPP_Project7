#pragma once
#include "Character.h"
#include "Utility.h"

struct Dragon : Character
{
    Dragon (std::string name_, int hp, int armor_, int attackDamage_ = 80 ) : 
    Character( hp, armor_, attackDamage_ ),
    name (name_)
    {
        
    }
    
    const std::string& getName() override { return name; }
    std::string getStats() override { return getCharacterStats(this); }
    void attack(Character& other) override;
private:
    const std::string name ;
};

