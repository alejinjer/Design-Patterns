#ifndef PET_H
#define PET_H


class Pet
{
public:    
    virtual ~Pet() = 0;
};

class UnicornSeraphim:public Pet
{
public:
    UnicornSeraphim();
    virtual ~UnicornSeraphim() override;
};

class QueenOfCat:public Pet
{
public:
    QueenOfCat();
    virtual ~QueenOfCat() override;
};

#endif // PET_H
