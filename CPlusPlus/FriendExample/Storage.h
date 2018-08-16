#ifndef FRIENDS_STORAGE_H
#define FRIENDS_STORAGE_H


#include "Display.h"

class Storage {
   private:
    int m_nValue;
    double m_dValue;
public:
    Storage(int nValue, double dValue);

    // Make the Display class a friend of Storage
    // friend class Display;
    friend void Display::displayItem(Storage &storage);
};


#endif //FRIENDS_STORAGE_H