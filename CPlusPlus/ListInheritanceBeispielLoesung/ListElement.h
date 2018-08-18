#ifndef LL_NODE_H_
#define LL_NODE_H_

#include <ostream>

class ListElement {
public:
	ListElement *next;
	ListElement *prev;
	int data;

    friend std::ostream& operator<<(std::ostream& o, const ListElement& rhs){
        o << rhs.data;
        return o;
    };
};

#endif /* LL_NODE_H_ */