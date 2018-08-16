#include <iostream>
#include "Display.h"
#include "Storage.h"

Display::Display(bool displayIntFirst) {m_displayIntFirst = displayIntFirst;}

void Display::displayItem(Storage &storage) {
    if (m_displayIntFirst)
        std::cout << storage.m_nValue << "\n" << storage.m_dValue << '\n';
    else // display double first
        std::cout << storage.m_dValue << "\n" << storage.m_nValue << '\n';
}
