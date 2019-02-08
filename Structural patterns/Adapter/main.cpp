#include "audioplayer.h"

int main()
{
    AudioPlayer *ap = new AudioPlayer();
    ap->play("mp3", "track1.mp3");
    ap->play("MP4", "track2.mp3");
    ap->play("VLC", "track3.mp3");
    ap->play("kek", "track3.kek");
    delete(ap);
}
