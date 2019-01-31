#include <rangeattacker.h>

RangeAttacker::~RangeAttacker() {}

void RangeAttacker::makeAttack() {
    bullet = createBullet();
    // do some actions with bullet
    std::cout << "Fire!\n";
}

Hawkeye::Hawkeye(){}
Hawkeye::~Hawkeye() {}

Bullet *Hawkeye::createBullet() {
    std::cout << "Arrow was charged!\n";
    return new Arrow();
}

Mage::Mage() {}
Mage::~Mage() {}

Bullet *Mage::createBullet() {
    std::cout << "Fireball was casted!\n";
    return new FireBall();
}
