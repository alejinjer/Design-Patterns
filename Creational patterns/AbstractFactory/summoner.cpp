#include "summoner.h"
#include <iostream>

Summoner::~Summoner(){}

ElementalSummoner::ElementalSummoner(){}
ElementalSummoner::~ElementalSummoner(){}

Spell* ElementalSummoner::castSpell()
{
    std::cout << "Ice Bolt is ready to freeze your enemy!\n";
    return new IceBolt();
}

Pet* ElementalSummoner::summonPet()
{
    std::cout << "Eeeeegogo!\n";
    return new UnicornSeraphim();
}


Warlock::Warlock(){}
Warlock::~Warlock(){}

Spell* Warlock::castSpell()
{
    std::cout << "Fireball is ready to fry something!\n";
    return new Fireball();
}

Pet* Warlock::summonPet()
{
    std::cout << "Meow..)\n";
    return new QueenOfCat();
}
