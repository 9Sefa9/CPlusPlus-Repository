#include "List.h"
#include <iostream>
#include "Collection.h"

List::List(int size):Collection(size) {
}

List::~List() {
	std::cout<<"calling List dtor"<<std::endl;
}

