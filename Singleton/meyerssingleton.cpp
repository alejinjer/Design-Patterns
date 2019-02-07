#include "meyerssingleton.h"

MeyersSingleton &MeyersSingleton::instance()
{
    static MeyersSingleton instance;
    return instance;
}

MeyersSingleton::MeyersSingleton()
{

}

MeyersSingleton::~MeyersSingleton()
{

}
