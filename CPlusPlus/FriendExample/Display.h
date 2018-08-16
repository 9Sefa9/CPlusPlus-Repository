#ifndef FRIENDS_DISPLAY_H
#define FRIENDS_DISPLAY_H

//#include "Storage.h"

class Storage;
class Display {
private:
    bool m_displayIntFirst;

public:
    Display(bool displayIntFirst);

    void displayItem(Storage &storage);
};

#endif //FRIENDS_DISPLAY_H