#pragma once
#include "Character.h"

struct Dwarf : Character
{
    Dwarf(const std::string name_, int hp, int armor_, int attackDamage_);
    ~Dwarf() override;

    const std::string& getName() override;
    std::string getStats() override;

    private:
    const std::string name;
};
