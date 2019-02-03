#ifndef PIZZACONSTRUCTOR_H
#define PIZZACONSTRUCTOR_H
#include "builder.h"
#include "pizza.h"

class PizzaConstructor:public Builder
{    
private:
    Pizza *pizza;
public:    
    PizzaConstructor();
    virtual ~PizzaConstructor() override;

    virtual void reset() override;
    virtual void addSauce() override;
    virtual void addMozzarella() override;
    virtual void addBasil() override;
    virtual void addOlive() override;
    virtual void addBacon() override;
    virtual void addSalami() override;
    virtual void addPepperoni() override;
    virtual void addTomato() override;
    virtual void addMushroom() override;
    virtual Pizza *getResult();

};

#endif // PIZZACONSTRUCTOR_H
