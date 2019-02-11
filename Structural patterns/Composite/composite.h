#ifndef COMPOSITE_H
#define COMPOSITE_H
#include "graphic.h"
#include <iostream>
#include <vector>

class Composite:public Graphic
{
private:
    std::vector<Graphic*> components;
public:
    Composite();
    virtual ~Composite() override;
    virtual void draw() override;
    virtual void move(int x, int y) override;
    virtual void add(Graphic* g) override;
    virtual void remove(Graphic* g) override;
};

#endif // COMPOSITE_H
