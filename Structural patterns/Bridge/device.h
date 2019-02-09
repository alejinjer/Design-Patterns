#ifndef DEVICE_H
#define DEVICE_H


class Device
{
public:
    virtual ~Device() = 0;
    virtual bool isEnabled() = 0;
    virtual void enable() = 0;
    virtual void disable() = 0;
    virtual int getVolume() = 0;
    virtual void setVolume(int) = 0;
    virtual int getChannel() = 0;
    virtual void setChannel(int) = 0;
};

#endif // DEVICE_H
