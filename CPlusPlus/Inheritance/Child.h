//
// Vererbung nur mithilfe von include möglich.
// 1. Inlcude Class Parent oder #include "Parent.h" ? --> https://bit.ly/2wb10HD
//

#ifndef CPLUSPLUS_CHILD_H
#define CPLUSPLUS_CHILD_H
#include <iostream>
#include "Parent.h"
class Parent;
class Child : private Parent {
/* public:
   virtual void virtualF(short a){
        std::cout<<"call from Child\n"<<a;
    };
    virtual void virtualF(int a){
        std::cout<<"call from Child\n"<<a;
    };*/


//sichtbarkeitsmodifikatoren in der Vererbung:
    //Class Child : public Parent => Kindklasse hat zugang zur public funktion. Nicht aber zur Private oder Protected funktion in der Eltern Klasse
    //Class Child : private Parent => Kindklasse hat zugang zu keinen funktionen der Base Class!
    //Class Child : protected Parent => Kindklasse hat zugang zu keinen funktionen Base Class!

public: void Ppriv() const{
        getPpriv();
}
};


#endif //CPLUSPLUS_CHILD_H
