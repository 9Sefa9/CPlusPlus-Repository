#include <iostream>
#include "Parent.h"
#include "Child.h"
using namespace std;

int main(){
    //Parent parent;
   // Child child;

   // child.doSomethingInChild();//funktioniert! aber nich mehr wenn doSomethingInChild in private liegt!
   // parent.doSomethingInParent(); //funktioniert!

    //dispatching
    Parent *parentPolymorph = new Child();
    parentPolymorph->f(2D); ////für dynamisches dispatching -> virtual vor den funktionen.


    //polymorphismus / überschreiben / überladen
   // Child c1,c2;
   // c1.f(4);

   // Parent *p1 = &c1;
   // (*p1).f(2); // call from parent -> Invariant parameter inheritance!

}