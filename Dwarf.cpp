#include "Dwarf.h"

//Dwarf::Dwarf

//Dwarf::getName

//Dwarf::getStats
const std::string& Dwarf::getName()
{ 
    return name; 
}
std::string Dwarf::getStats()
{ 
    return getCharacterStats(this); 
}
