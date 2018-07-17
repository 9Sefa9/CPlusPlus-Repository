#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "ListElement.h"
#include "List.h"

class LinkedList : public List{
protected:
	ListElement *first;
	ListElement *last;
public:
	LinkedList(ListElement *first, ListElement *last, int size);
	virtual ~LinkedList();
	virtual ListElement *getFirst() const;
	virtual ListElement *getLast() const;

	//seine lösung:
	friend std::ostream &operator<< (std::ostream& o, const LinkedList&rhs);
};





#endif /* LINKEDLIST_H_ */
