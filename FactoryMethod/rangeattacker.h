#ifndef RANGEATTACKER_H
#define RANGEATTACKER_H
#include <bullet.h>
#include <iostream>

class RangeAttacker {
private:
    Bullet *bullet;
public:
    virtual ~RangeAttacker();
    virtual Bullet *createBullet() = 0;
    virtual void makeAttack();
};

class Hawkeye:public RangeAttacker {
public:
    Hawkeye();
    virtual ~Hawkeye() override;
    virtual Bullet *createBullet() override;
};

class Mage:public RangeAttacker {
public:
    Mage();
    virtual ~Mage() override;
    virtual Bullet *createBullet() override;
};

#endif // RANGEATTACKER_H
