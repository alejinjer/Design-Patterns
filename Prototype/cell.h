#ifndef CELL_H
#define CELL_H
#include "prototype.h"
#include <iostream>

class Cell:public Prototype
{
private:
    std::string name;
public:
    Cell();    
    Cell(Cell *);
    virtual ~Cell();

    virtual Prototype *clone();
};

#endif // CELL_H
