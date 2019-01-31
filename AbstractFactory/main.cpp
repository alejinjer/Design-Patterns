#include "summoner.h"
int main()
{    
    Summoner *elf = new ElementalSummoner();
    Summoner *human = new Warlock();
    elf->castSpell();
    elf->summonPet();
    human->castSpell();
    human->summonPet();

    delete (elf);
    delete (human);

}
