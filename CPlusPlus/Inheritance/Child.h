//
// Vererbung nur mithilfe von include möglich.
// 1. Inlcude Class Parent oder #include "Parent.h" ? --> https://bit.ly/2wb10HD
//

#ifndef CPLUSPLUS_CHILD_H
#define CPLUSPLUS_CHILD_H
#include <iostream>
#include "Parent.h"
class Parent;
class Child : public Parent{
public:
    virtual void virtualF(short a){
        std::cout<<"call from Child\n"<<a;
    };
    virtual void virtualF(int a){
        std::cout<<"call from Child\n"<<a;
    };
};

#endif //CPLUSPLUS_CHILD_H
