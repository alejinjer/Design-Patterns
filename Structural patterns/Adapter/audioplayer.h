#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H
#include "mediaadapter.h"

class AudioPlayer:public MediaPlayer
{
private:
    MediaAdapter *ma;
public:
    AudioPlayer();
    virtual ~AudioPlayer() override;
    virtual void play(std::string audioType, std::string fileName) override;

};

#endif // AUDIOPLAYER_H
