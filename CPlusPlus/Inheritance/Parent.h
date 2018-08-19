//
// Parent Class.  Child is inheriting form here
//

#ifndef CPLUSPLUS_PARENT_H
#define CPLUSPLUS_PARENT_H

#include <iostream>
using namespace std;
class Parent {
    int y=2018, m=8, d=11;
//    Parent p;
public:
      //Rule of Three!
  //    Parent(Parent & p1):p(p1){};
  //    ~Parent(Parent & p1){ delete this->p; }
  //    Parent(const Parent& p);

  //  Parent();

  //  Parent& operator=(const Parent & p);

      //
      virtual void virtualF(int d) {
         std::cout << "call from parent!\n" << d;
      }
public:
    //operator overloading
    friend ostream& operator<<(ostream& o, const Parent&);
      //type conversion:
    operator bool(){
        return true;
    }

public: void Ppub(){std::cout<<"Ppub";}
public: void getPpriv()const{Ppriv();}
protected: void Pprot(){std::cout<<"Pprot";}
private: void Ppriv()const{std::cout<<"Ppriv";}

};
#endif //CPLUSPLUS_PARENT_H
