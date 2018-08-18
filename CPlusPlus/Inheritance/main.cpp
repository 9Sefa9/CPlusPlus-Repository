#include <iostream>
#include "Parent.h"
#include "Child.h"
using namespace std;
void myException(){
    cout<<"true";
}
int main(){

    //polymorphismus / überschreiben / überladen
    // base funciton und Kind function gleich ?  dann override !
    //falls Base und Child unterschiedliche FUnktionen haben: Base Class function wird aufgerufen.
    //Also überladen.
    Child c1;
    Parent *p1 = &c1;
    short s = 5;
    p1->virtualF(3);

    //ostream operator overloading for <<
    Parent p2,p3;
    //cout <<"TEEEEST::"<<p2<<"\n";

    //operator bool
    //if(p2){
    //    cout<<true;
   // }

    //operator =
   // p2 = p3;
    /*try {
        if (p2) {
           throw myException();
        }
    }catch(const myException& e){
        throw e;
    }*/
}