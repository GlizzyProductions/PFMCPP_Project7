#pragma once

#include "Character.h"

struct Dragon : Character
{
    Dragon(const std::string name, int hp, int armor_, int attackDamage_);
    ~Dragon() override;

    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};

