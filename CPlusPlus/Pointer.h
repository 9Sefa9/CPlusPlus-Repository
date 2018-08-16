//
// Created by Progamer on 14.08.2018.
//

#ifndef CPLUSPLUS_POINTER_H
#define CPLUSPLUS_POINTER_H

#include <iostream>
#include "Pointer2.h"

class Pointer {
private:int privaterInteger=31213;
public:
  /*Pointer(const Pointer&);
    Pointer(){
        std::cout<<"kONSTRUKTOR CALL\n";
    }
    std::string helloWorld();
  */

  //----friend----

  friend void ichBinEinFreund(Pointer& p);
  void ichBinKeinFreund();
  //--------------

    struct test{
        int a = 1;
    public:
        test(): a(2){

        };
    }t;


};
//-----so setzt man die konstruktor setter richtig!------
class Time {
public:
   /* Pointer& point;
    Time(Pointer& newPoint): point(newPoint){

    }*/

};




#endif //CPLUSPLUS_POINTER_H
