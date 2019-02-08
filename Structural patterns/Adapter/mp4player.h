#ifndef MP4PLAYER_H
#define MP4PLAYER_H
#include "advancedmediaplayer.h"

class Mp4Player: public AdvancedMediaPlayer
{
public:
    Mp4Player();
    virtual ~Mp4Player() override;
    virtual void playVLC(std::string) override;
    virtual void playMP4(std::string) override;
};

#endif // MP4PLAYER_H
