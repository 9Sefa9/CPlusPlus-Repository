#ifndef CPLUSPLUS_ABDURRAHMAN_H
#define CPLUSPLUS_ABDURRAHMAN_H

#include "Sefa.h"

class Abdurrahman {
private: int computerPassword;
public:
    Abdurrahman(int t);
    friend void Sefa::takePasswordFrom(Abdurrahman &abdus);

};


#endif //CPLUSPLUS_ABDURRAHMAN_H
