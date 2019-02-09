#ifndef REMOTE_H
#define REMOTE_H
#include "tv.h"

class Remote
{
protected:
    Device *device;
public:
    Remote(Device *device);
    ~Remote();
    void togglePower();
    void volumeUp();
    void volumeDown();
    void nextChannel();
    void previousChannel();
    int currentChannel();
};

#endif // REMOTE_H
