#ifndef GRAPHIC_H
#define GRAPHIC_H
#include <iostream>

class Graphic
{
public:    
    virtual ~Graphic() = 0;
    virtual void draw() = 0;
    virtual void move(int x, int y) = 0;
    virtual void add(Graphic* g) = 0;
    virtual void remove(Graphic* g) = 0;
};

#endif // GRAPHIC_H
