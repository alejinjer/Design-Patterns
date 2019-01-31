#include <QCoreApplication>
#include "summoner.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Summoner *elf = new ElementalSummoner();
    Summoner *human = new Warlock();

    elf->castSpell();
    elf->summonPet();

    human->castSpell();
    human->summonPet();

    return a.exec();
}
