#ifndef CONSUMER_H
#define CONSUMER_H
#include "pizzaconstructor.h"
#include "pizza.h"

class Consumer
{
public:
    Consumer();
    ~Consumer();
    Pizza *makePizzaMargherita(PizzaConstructor *pizzaconstructor);
    Pizza *makePizzaPepperoni(PizzaConstructor *pizzaconstructor);
    Pizza *makePizzaBranded(PizzaConstructor *pizzaconstructor);
};

#endif // CONSUMER_H
