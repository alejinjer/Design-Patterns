#include "composite.h"

Composite::Composite()
{

}

Composite::~Composite()
{

}

void Composite::draw()
{
    for(auto c : components) {
        c->draw();
    }
}

void Composite::move(int x, int y)
{
    for(auto c : components) {
        c->move(x, y);
    }
}

void Composite::add(Graphic *g)
{
    components.push_back(g);
}

void Composite::remove(Graphic *g)
{
    for(unsigned int i = 0; i < components.size(); i++) {
        if(components[i] == g) {
            components.erase(components.begin() + i);
        }
    }
}
