#include "LinkedList.h"
#include "ListElement.h"
#include <iostream>

LinkedList::LinkedList(ListElement *first, ListElement *last, int size):List(size),first(first),last(last) {
}

LinkedList::~LinkedList(void) {
	std::cout<<"calling LL dtor"<<std::endl;
}

ListElement* LinkedList::getFirst() const {
	return this->first;
}

ListElement* LinkedList::getLast() const{
	return this->last;
}