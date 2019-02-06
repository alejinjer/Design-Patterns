#include "cell.h"

Cell::Cell()
{

}

Cell::Cell(Cell *)
{

}

Cell::~Cell()
{

}
Prototype *Cell::clone()
{
    std::cout << "Hi, bro!" << std::endl;
    return new Cell(this);
}
