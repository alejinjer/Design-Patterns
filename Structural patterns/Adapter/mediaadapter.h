#ifndef MEDIAADAPTER_H
#define MEDIAADAPTER_H
#include "advancedmediaplayer.h"
#include "mediaplayer.h"
#include "vlcplayer.h"
#include "mp4player.h"

class MediaAdapter:public MediaPlayer
{
private:
    AdvancedMediaPlayer *amp;
public:
    MediaAdapter();
    MediaAdapter(std::string audioType);
    virtual ~MediaAdapter() override;
    virtual void play(std::string audioType, std::string fileName) override;
};

#endif // MEDIAADAPTER_H
