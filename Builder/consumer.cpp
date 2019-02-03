#include "consumer.h"
#include <iostream>

Consumer::Consumer()
{

}

Consumer::~Consumer()
{

}

Pizza* Consumer::makePizzaMargherita(PizzaConstructor *pizzaconstructor)
{
    pizzaconstructor->reset();
    pizzaconstructor->addSauce();
    pizzaconstructor->addTomato();
    pizzaconstructor->addMozzarella();
    pizzaconstructor->addBasil();
    std::cout << "Your Margherita is waiting for you ;)" << std::endl;
    return pizzaconstructor->getResult();
}

Pizza *Consumer::makePizzaPepperoni(PizzaConstructor *pizzaconstructor)
{
    pizzaconstructor->reset();
    pizzaconstructor->addSauce();
    pizzaconstructor->addPepperoni();
    pizzaconstructor->addMozzarella();
    pizzaconstructor->addBasil();
    std::cout << "Pepperoni is ready to be eaten!" << std::endl;
    return pizzaconstructor->getResult();
}

Pizza *Consumer::makePizzaBranded(PizzaConstructor *pizzaconstructor)
{
    pizzaconstructor->reset();
    pizzaconstructor->addSauce();
    pizzaconstructor->addSalami();
    pizzaconstructor->addTomato();
    pizzaconstructor->addBacon();
    pizzaconstructor->addMozzarella();
    pizzaconstructor->addOlive();
    pizzaconstructor->addBasil();
    std::cout << "Pizza from our chef is the best choice!" << std::endl;
    return pizzaconstructor->getResult();
}
