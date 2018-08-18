/*
 * LinkedList.hpp
 *
 *  Created on: Jun 23, 2016
 *      Author: sasa
 */

#ifndef DOUBLELINKEDLIST_H_
#define DOUBLELINKEDLIST_H_
#include "ListElement.h"
#include "LinkedList.h"

class DoubleLinkedList : public LinkedList {
private:
public:
	DoubleLinkedList(void);
	~DoubleLinkedList(void);
	bool add(int data);
	bool add(int data, int index);
	int get(int index) const;
	bool remove(int index);
	void print(void) const;
};
#endif /* DOUBLELINKEDLIST_H_ */
