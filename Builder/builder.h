#ifndef BUILDER_H
#define BUILDER_H


class Builder
{
public:
    virtual ~Builder();

    virtual void reset() = 0;
    virtual void addSauce() = 0;
    virtual void addMozzarella() = 0;
    virtual void addBasil() = 0;
    virtual void addOlive() = 0;
    virtual void addBacon() = 0;
    virtual void addSalami() = 0;
    virtual void addPepperoni() = 0;
    virtual void addTomato() = 0;
    virtual void addMushroom() = 0;
};

#endif // BUILDER_H
