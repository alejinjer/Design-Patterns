#ifndef BULLET_H
#define BULLET_H

class Bullet {
public:
   Bullet();
   virtual  ~Bullet();
};

class Arrow:public Bullet {
public:
    Arrow();
    virtual ~Arrow();
};

class FireBall:public Bullet {
public:
    FireBall();
    virtual ~FireBall();
};

#endif // BULLET_H
