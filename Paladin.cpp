#include "Paladin.h"

// Paladin::Paladin

// Paladin::getName

// Paladin::getStats
    
const std::string& Paladin::getName()
{ 
    return name; 
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
