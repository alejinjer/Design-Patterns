#include "mediaadapter.h"

MediaAdapter::MediaAdapter()
{
    
}

MediaAdapter::MediaAdapter(std::string audioType)
{    
    std::transform(audioType.begin(), audioType.end(), audioType.begin(), ::tolower);
    if(audioType == "vlc") {
        amp = new VlcPlayer();
    } else if(audioType == "mp4") {
        amp = new Mp4Player();
    }
}

MediaAdapter::~MediaAdapter()
{

}

void MediaAdapter::play(std::string audioType, std::string fileName)
{
    std::transform(audioType.begin(), audioType.end(), audioType.begin(), ::tolower);
    if(audioType == "vlc") {
        amp->playVLC(fileName);
    } else if(audioType == "mp4") {
        amp->playMP4(fileName);
    }

}
