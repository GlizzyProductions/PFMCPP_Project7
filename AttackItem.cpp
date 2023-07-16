#include "Item.h"
#include "Utility.h"

struct Character;
struct AttackItem : Item
{
    AttackItem() : Item("attack item", 10) { }
    void use(Character* character) override
    {
        useAttackItem(character, this);
    }
};

