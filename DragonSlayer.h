#pragma once
#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer(const std::string name, int hp, int armor_, int attackDamage_);
    ~DragonSlayer() override;

    void attack(Character& other) override;
    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
