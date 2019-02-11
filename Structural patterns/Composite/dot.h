#ifndef DOT_H
#define DOT_H
#include "graphic.h"

class Dot:public Graphic
{
private:
    int x, y;
public:
    Dot(int x, int y);
    virtual ~Dot() override;
    virtual void draw() override;
    virtual void move(int x, int y) override;
    virtual void add(Graphic*) override {}
    virtual void remove(Graphic*) override {}
};

#endif // DOT_H
