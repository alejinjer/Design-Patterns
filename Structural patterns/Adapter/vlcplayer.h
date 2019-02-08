#ifndef VLCPLAYER_H
#define VLCPLAYER_H
#include "advancedmediaplayer.h"

class VlcPlayer: public AdvancedMediaPlayer
{
public:
    VlcPlayer();
    virtual ~VlcPlayer() override;
    virtual void playVLC(std::string) override;
    virtual void playMP4(std::string) override;
};

#endif // VLCPLAYER_H
