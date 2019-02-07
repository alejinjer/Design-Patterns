#include "singleton.h"

Singleton *Singleton::getInstance()
{
    if(!this->instance) {
        this->instance = new Singleton();
    }
    return this->instance;
}

Singleton::Singleton()
{

}

Singleton::~Singleton()
{

}
