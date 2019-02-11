#include "line.h"


Line::Line(int x1, int y1, int x2, int y2)
{
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

Line::~Line()
{

}

void Line::draw()
{
    std::cout << "Line (" << x1 << ", " << y1 << ")" << ", (" << x2 << ", " << y2 << ")" << std::endl;
}

void Line::move(int x, int y)
{
    this->x1 += x;
    this->y1 += y;
    this->x2 += x;
    this->y2 += y;
}
