#include "remote.h"
#include <iostream>

Remote::Remote(Device *device)
{
    this->device = device;
}

Remote::~Remote()
{
    delete this->device;
}

void Remote::togglePower()
{
    if(this->device->isEnabled()) {
        this->device->disable();
        std::cout << "OFF" << std::endl;
    } else {
        this->device->enable();
        std::cout << "ON" << std::endl;
    }
}

void Remote::volumeUp()
{
    this->device->setVolume(this->device->getVolume() + 1);
    std::cout << "Volume: " << this->device->getVolume() << std::endl;
}

void Remote::volumeDown()
{
    this->device->setVolume(this->device->getVolume() - 1);
    std::cout << "Volume: " << this->device->getVolume() << std::endl;
}

void Remote::nextChannel()
{
    this->device->setChannel(this->device->getChannel() + 1);
    std::cout << "Channel: " << this->device->getChannel() << std::endl;
}

void Remote::previousChannel()
{
    this->device->setChannel(this->device->getChannel() - 1);
    std::cout << "Channel: " << this->device->getChannel() << std::endl;
}

int Remote::currentChannel()
{
    std::cout << "Current channel is: " << this->device->getChannel() << std::endl;
    return this->device->getChannel();
}
