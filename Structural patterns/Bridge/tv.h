#ifndef TV_H
#define TV_H
#include "device.h"

class TV:public Device
{
private:
    bool enabled;
    int volume;
    int channel;
public:
    TV();
    virtual ~TV() override;
    virtual bool isEnabled() override;
    virtual void enable() override;
    virtual void disable() override;
    virtual int getVolume() override;
    virtual void setVolume(int) override;
    virtual int getChannel() override;
    virtual void setChannel(int) override;
};

#endif // TV_H
