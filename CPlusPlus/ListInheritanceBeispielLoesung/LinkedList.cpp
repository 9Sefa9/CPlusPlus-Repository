#include "LinkedList.h"
#include "ListElement.h"
#include <iostream>

LinkedList::~LinkedList(void) {
	std::cout<<"calling LL dtor"<<std::endl;
}

ListElement* LinkedList::getFirst() const {
	return this->first;
}

ListElement* LinkedList::getLast() const{
	return this->last;
}

std::ostream& operator<<(std::ostream& o, const LinkedList& rhs) {
	ListElement *curr_element_ptr = rhs.first;
	while (curr_element_ptr != 0) {
		o << *curr_element_ptr << std::endl;
		curr_element_ptr = curr_element_ptr->next;
	}
	o<<"Size: "<<rhs.size << std::endl;
	return o;
}
