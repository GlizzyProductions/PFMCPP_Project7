#pragma once
#include "Character.h"
#include "Utility.h"

struct DragonSlayer : Character
{
    DragonSlayer (std::string name_, int hp, int armor_, int attackDamage_ = 4 ) : 
    Character( hp, armor_, attackDamage_ ),
    name (name_)
    {
        
    }
    
    const std::string& getName() override { return name; }
    std::string getStats() override { return getCharacterStats(this); }
    void attack(Character& other) override;
private:
    const std::string name;
};
