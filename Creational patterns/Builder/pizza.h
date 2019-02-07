#ifndef PIZZA_H
#define PIZZA_H


class Pizza
{
private:
    bool Sauce;
    bool Mozzarella;
    bool Basil;
    bool Olive;
    bool Bacon;
    bool Salami;
    bool Pepperoni;
    bool Tomato;
    bool Mushroom;
public:
    Pizza();
    virtual ~Pizza();

    virtual void setSauce(bool value);
    virtual void setMozzarella(bool value);
    virtual void setBasil(bool value);
    virtual void setOlive(bool value);
    virtual void setBacon(bool value);
    virtual void setSalami(bool value);
    virtual void setPepperoni(bool value);
    virtual void setTomato(bool value);
    virtual void setMushroom(bool value);

};

#endif // PIZZA_H
