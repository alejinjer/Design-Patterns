#include "audioplayer.h"

AudioPlayer::AudioPlayer()
{

}

AudioPlayer::~AudioPlayer()
{

}

void AudioPlayer::play(std::string audioType, std::string fileName)
{
    std::transform(audioType.begin(), audioType.end(), audioType.begin(), ::tolower);
    if(audioType == "mp3") {
        std::cout << "Playing mp3 file. Name: " + fileName << std::endl;
    } else if(audioType == "vlc" || audioType == "mp4"){
        ma = new MediaAdapter(audioType);
        ma->play(audioType, fileName);
    } else {
        std::cout << "Invalid media. " + audioType + " format not supported" << std::endl;
    }

}
