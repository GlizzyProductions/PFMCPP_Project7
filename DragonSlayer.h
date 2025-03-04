#pragma once
#include "Character.h"
#include "Utility.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer (std::string name_, int hp, int armor_, int attackDamage_ = 4 );
    
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;

private:
    const std::string name;
    std::unique_ptr<AttackItem> attackItem { new AttackItem() };
};
