#ifndef LL_NODE_H_
#define LL_NODE_H_

#include <ostream>

class ListElement {
public:
	ListElement *next;
	ListElement *prev;
	int data;
};

#endif /* LL_NODE_H_ */