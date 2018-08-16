#include "Collection.h"
#include <iostream>

Collection::Collection(int size):size(size) {
}

bool Collection::isEmpty(void) const {
	return size == 0;
}

Collection::~Collection(void) {
	std::cout<<"calling Collection dtor"<<std::endl;
}

int Collection::getSize() const{
	return this->size;
}
