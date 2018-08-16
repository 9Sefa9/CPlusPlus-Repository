#include <iostream>
#include "Sefa.h"
#include "Abdurrahman.h"

//sefa will password von abdus holen. er erlaubt es aber nicht ! später markiert er mich als freund!
void Sefa::takePasswordFrom(Abdurrahman &abdus) {
    std::cout<<"Abdurrahmans Schokolade ist: "<<abdus.computerPassword<<"!!"<<(std::endl);
}