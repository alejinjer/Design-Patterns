#ifndef SINGLETON_H
#define SINGLETON_H


class Singleton
{
public:
    Singleton *getInstance();
private:
    Singleton();
    ~Singleton();
    Singleton *instance;
};

#endif // SINGLETON_H
