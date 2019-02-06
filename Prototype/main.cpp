#include "cell.h"

int main()
{
    Cell *p = new Cell();
    Prototype *p_clone = p->clone();

    delete (p);
    delete (p_clone);
}
