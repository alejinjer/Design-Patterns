#ifndef ADVANCEDMEDIAPLAYER_H
#define ADVANCEDMEDIAPLAYER_H
#include <iostream>

class AdvancedMediaPlayer
{
public:
    virtual ~AdvancedMediaPlayer() = 0;
    virtual void playVLC(std::string fileName) = 0;
    virtual void playMP4(std::string fileName) = 0;
};

#endif // ADVANCEDMEDIAPLAYER_H
