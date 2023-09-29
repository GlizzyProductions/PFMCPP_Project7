#pragma once
#include "Character.h"
#include "Utility.h"

struct Dwarf : Character
{
    Dwarf (std::string name_, int hp, int armor_, int attackDamage_ = 4 );
    
    const std::string& getName() override;
    std::string getStats() override;
                 
private:
    const std::string name;
};
