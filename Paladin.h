#pragma once

struct Paladin : Character
{
    Paladin(const std::string name, int hp, int armor_, int attackDamage_ );
    ~Paladin() override;

    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
