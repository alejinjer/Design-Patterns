#include "remote.h"

int main()
{
    Device *tv = new TV();
    Remote *remote = new Remote(tv);

    remote->togglePower();
    remote->currentChannel();
    remote->nextChannel();
    remote->nextChannel();
    remote->nextChannel();
    remote->volumeUp();
    remote->volumeUp();
    remote->volumeDown();
    remote->togglePower();

    delete(remote);
    delete(tv);
}
