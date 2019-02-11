#include "dot.h"

Dot::Dot(int x, int y)
{
    this->x = x;
    this->y = y;
}

Dot::~Dot()
{

}

void Dot::draw()
{
    std::cout << "Dot (" << x << ", " << y << ")" << std::endl;
}

void Dot::move(int x, int y)
{
    this->x += x;
    this->y += y;
    this->draw();
}
