#include "tv.h"

TV::TV()
{
    this->enabled = false;
    this->volume = 5;
    this->channel = 1;
}

TV::~TV()
{

}

bool TV::isEnabled()
{
    return this->enabled;
}

void TV::enable()
{
    this->enabled = true;
}

void TV::disable()
{
    this->enabled = false;
}

int TV::getVolume()
{
    return this->volume;
}

void TV::setVolume(int value)
{
    this->volume = value;
}

int TV::getChannel()
{
    return this->channel;
}

void TV::setChannel(int value)
{
    this->channel = value;
}
