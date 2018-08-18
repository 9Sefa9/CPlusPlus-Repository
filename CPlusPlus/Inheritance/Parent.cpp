//
// Created by Progamer on 17.08.2018.
//

#include "Parent.h"

ostream& operator<<(ostream& o, const Parent& p){
    o << p.d << "." << p.m<<":" <<p.y;



    return o;
}

