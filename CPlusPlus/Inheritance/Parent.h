//
// Parent Class.  Child is inheriting form here
//

#ifndef CPLUSPLUS_PARENT_H
#define CPLUSPLUS_PARENT_H

#include <iostream>
class Parent {
public:
     virtual void f(int d){
        std::cout <<"call from parent!\n"<<d;
    }
    virtual void doSomethingInParent(){
        std::cout <<"do something parent!\n";
    }
};
#endif //CPLUSPLUS_PARENT_H
