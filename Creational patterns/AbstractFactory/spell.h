#ifndef SPELL_H
#define SPELL_H


class Spell
{
public:    
    virtual ~Spell() = 0;
};

class IceBolt:public Spell {
public:
    IceBolt();
    virtual ~IceBolt() override;
};

class Fireball:public Spell {
public:
    Fireball();
    virtual ~Fireball() override;
};

#endif // SPELL_H
