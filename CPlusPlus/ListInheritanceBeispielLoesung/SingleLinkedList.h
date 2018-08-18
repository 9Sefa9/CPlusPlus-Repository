
#ifndef SINGLELINKEDLIST_H_
#define SINGLELINKEDLIST_H_
#include "LinkedList.h"

//typedef struct ListElement {
//	struct ListElement *next;
//	int data;
//} ll_node_t;

class SingleLinkedList : public LinkedList {
public:
	SingleLinkedList(void);
	~SingleLinkedList(void);
	bool add(int data);
	bool add(int data, int index);
	int get(int index) const;
	bool remove(int index);
	void print(void) const;
};
#endif /* SINGLELINKEDLIST_H_ */
