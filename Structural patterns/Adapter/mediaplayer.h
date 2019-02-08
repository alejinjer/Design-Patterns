#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H
#include <iostream>

class MediaPlayer
{
public:    
    virtual ~MediaPlayer() = 0;
    virtual void play(std::string audioType, std::string fileName) = 0;
};

#endif // MEDIAPLAYER_H
