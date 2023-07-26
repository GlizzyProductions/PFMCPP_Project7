//Dragon.h
#pragma once
#include "Character.h"
#include "Utility.h"

struct Dragon : Character
{
    Dragon (std::string name_, int hp, int armor_, int attackDamage_ = 80); 

    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;

    private:
        const std::string name ;
};

