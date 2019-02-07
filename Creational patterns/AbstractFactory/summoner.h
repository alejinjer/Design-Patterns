#ifndef SUMMONER_H
#define SUMMONER_H
#include "spell.h"
#include "pet.h"
class Summoner // Abstract Factory
{
public:    
    virtual ~Summoner() = 0;
    virtual Spell *castSpell() = 0; // returns new Spell
    virtual Pet *summonPet() = 0; // returns new Pet
};

class ElementalSummoner:public Summoner {
public:
    ElementalSummoner();
    virtual ~ElementalSummoner() override;
    virtual Spell *castSpell() override; // returns new Ice Bolt
    virtual Pet *summonPet() override; // returns new Unicorn Seraphim
};

class Warlock:public Summoner {
public:
    Warlock();
    virtual ~Warlock() override;
    virtual Spell *castSpell() override; // returns new Fireball
    virtual Pet *summonPet() override; // returns new Queen of cat
};

#endif // SUMMONER_H
