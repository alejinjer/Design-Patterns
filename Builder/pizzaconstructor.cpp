#include "pizzaconstructor.h"


PizzaConstructor::PizzaConstructor()
{

}

PizzaConstructor::~PizzaConstructor()
{

}

void PizzaConstructor::reset()
{
    pizza = new Pizza;
}

void PizzaConstructor::addSauce()
{
    pizza->setSauce(true);
}

void PizzaConstructor::addMozzarella()
{
    pizza->setMozzarella(true);
}

void PizzaConstructor::addBasil()
{
    pizza->setBasil(true);
}

void PizzaConstructor::addOlive()
{
    pizza->setOlive(true);
}

void PizzaConstructor::addBacon()
{
    pizza->setBacon(true);
}

void PizzaConstructor::addSalami()
{
    pizza->setSalami(true);
}

void PizzaConstructor::addPepperoni()
{
    pizza->setPepperoni(true);
}

void PizzaConstructor::addTomato()
{
    pizza->setTomato(true);
}

void PizzaConstructor::addMushroom()
{
    pizza->setMushroom(true);
}

Pizza *PizzaConstructor::getResult()
{
    return this->pizza;
}
