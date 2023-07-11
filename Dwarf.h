#pragma once
#include "Character.h"
#include "Utility.h"

struct Dwarf : Character
{

Dwarf (int hp, int armor_, int attackDamage_ ) : Character( hp, armor_, attackDamage_ ){}

const std::string& getName() override { return name; }
std::string getStats() override { return getCharacterStats(this); }
             
private:
    const std::string name;
};
