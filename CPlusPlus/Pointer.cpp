//
// Created by Progamer on 14.08.2018.
//

#include "Pointer.h"
#include <iostream>
using namespace std;
//-----------ungesund!----------
/*int& swap(int array[], int& a){
   return irgendwas
}*/
//---------------------------
//---------------Objeact Creation----------------
/*
std::string Pointer::helloWorld() {
    return "Hello World\n";
}
int main() {

    //stack
    Pointer p;
    cout<<p.helloWorld()<<endl;

    //heap
    Pointer *pHeap = new Pointer();
    cout <<pHeap->helloWorld()<<endl;

    delete pHeap;

    Pointer ptr();
    ptr().t;
}
 */
//--------------------Konstruckt--------------------
/*
struct konstrukt {
    //single Argument Constructor, default construcotr
     konstrukt(int a){
         std::cout<<"int"<<endl;
     }
     konstrukt(long a){
         std::cout<<"long"<<endl;
     }
    konstrukt(std::string a){
        std::cout<<"string"<<endl;
    }

};
int main(){
   // konstrukt array1 = 12;
    konstrukt array2(12l);
    Pointer *p = new Pointer();
    Pointer p1(*p); //copy Construcotr

}
 */
//-------------------Friend-----------------------------
void Pointer::ichBinKeinFreund(){

}
void ichBinEinFreund(Pointer &p) {
    p.privaterInteger;//private zugang!
}
int main(){


}