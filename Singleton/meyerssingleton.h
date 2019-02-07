#ifndef MEYERSSINGLETON_H
#define MEYERSSINGLETON_H


class MeyersSingleton
{
public:
    static MeyersSingleton& instance();
private:
    MeyersSingleton();
    MeyersSingleton(MeyersSingleton const&);
    MeyersSingleton& operator = (MeyersSingleton const&);
    ~MeyersSingleton();
};

#endif // MEYERSSINGLETON_H
