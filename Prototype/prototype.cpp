#include "prototype.h"

Prototype::Prototype()
{

}

Prototype::Prototype(Prototype *)
{

}

Prototype::~Prototype()
{

}

Prototype *Prototype::clone()
{
    return new Prototype(this);
}
