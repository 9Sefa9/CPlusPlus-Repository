#include "ArrayList.h"
#include "DoubleLinkedList.h"
#include "SingleLinkedList.h"
#include <iostream>
#include "List.h"

void addAndPrint(List* const l) {
	l->add(1);
	l->add(1);
	l->add(1);
	l->add(2);
	l->print();
}
int main(void) {
	List *sll = new SingleLinkedList();
	addAndPrint(sll);
	delete sll;

	List *dll = new DoubleLinkedList();
	addAndPrint(sll);
	delete dll;
}

