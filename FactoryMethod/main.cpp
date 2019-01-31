#include <QCoreApplication>
#include <bullet.h>
#include <rangeattacker.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

     RangeAttacker *h = new Hawkeye();
     RangeAttacker *m = new Mage();
     h->makeAttack();
     m->makeAttack();



    return a.exec();
}
