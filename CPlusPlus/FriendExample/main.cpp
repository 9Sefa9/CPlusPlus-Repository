#include <iostream>
#include "Storage.h"
#include "Display.h"

int main() {
    Storage storage(4, 5.5);
    Display display(true);
    display.displayItem(storage);
    return 0;
}