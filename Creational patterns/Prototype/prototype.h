#ifndef PROTOTYPE_H
#define PROTOTYPE_H


class Prototype
{
public:
    Prototype();
    Prototype(Prototype *);
    virtual ~Prototype();

    virtual Prototype *clone();
};

#endif // PROTOTYPE_H
