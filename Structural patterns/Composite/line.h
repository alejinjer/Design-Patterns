#ifndef LINE_H
#define LINE_H
#include "graphic.h"

class Line:public Graphic
{
private:
    int x1, y1, x2, y2;
public:
    Line(int x1, int y1, int x2, int y2);
    virtual ~Line() override;
    virtual void draw() override;
    virtual void move(int x, int y) override;
    virtual void add(Graphic*) override {}
    virtual void remove(Graphic*) override {}
};

#endif // LINE_H
