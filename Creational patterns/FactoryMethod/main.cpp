#include <rangeattacker.h>

int main()
{
     RangeAttacker *h = new Hawkeye();
     RangeAttacker *m = new Mage();
     h->makeAttack();
     m->makeAttack();

     delete(h);
     delete(m);
}
