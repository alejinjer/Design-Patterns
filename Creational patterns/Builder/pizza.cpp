#include "pizza.h"

void Pizza::setMozzarella(bool value)
{
    Mozzarella = value;
}

void Pizza::setOlive(bool value)
{
    Olive = value;
}

void Pizza::setBacon(bool value)
{
    Bacon = value;
}

void Pizza::setSalami(bool value)
{
    Salami = value;
}

void Pizza::setPepperoni(bool value)
{
    Pepperoni = value;
}

void Pizza::setTomato(bool value)
{
    Tomato = value;
}

void Pizza::setMushroom(bool value)
{
    Mushroom = value;
}

void Pizza::setSauce(bool value)
{
    Sauce = value;
}

void Pizza::setBasil(bool value)
{
    Basil = value;
}

Pizza::Pizza()
{
    Sauce = false;
    Mozzarella = false;
    Basil = false;
    Olive = false;
    Bacon = false;
    Salami = false;
    Pepperoni = false;
    Tomato = false;
    Mushroom = false;
}

Pizza::~Pizza()
{

}
