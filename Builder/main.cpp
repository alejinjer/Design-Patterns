#include "consumer.h"

int main()
{
    Consumer *consumer = new Consumer();
    PizzaConstructor *pizzaconstructor = new PizzaConstructor();

    Pizza *Margherita = consumer->makePizzaMargherita(pizzaconstructor);
    Pizza *Pepperoni = consumer->makePizzaPepperoni(pizzaconstructor);
    Pizza *Branded = consumer->makePizzaBranded(pizzaconstructor);

    delete(Margherita);
    delete(Pepperoni);
    delete(Branded);

    return 0;
}
