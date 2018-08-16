#include <stdlib.h>
#include <iostream>
#include "DoubleLinkedList.h"
#include "ListElement.h"

DoubleLinkedList::DoubleLinkedList(void) :
		LinkedList(0,0,0){
}

int DoubleLinkedList::get(int index) const {
	if (index < size) {
		ListElement *curr_element_ptr = first;

		for (int i = 0; i < index; i++) {
			curr_element_ptr = curr_element_ptr->next;
		}
		return curr_element_ptr->data;
	} else {
		//TODO: Throw exception!!
		return -1;
	}
}
bool DoubleLinkedList::add(int data) {
	ListElement *new_element_ptr = (ListElement*) malloc(sizeof(ListElement));
	new_element_ptr->data = data;
	new_element_ptr->next = 0;
	new_element_ptr->prev = 0;

	if (last != 0) {
		last->next = new_element_ptr;
		new_element_ptr->prev = last;
	} else {
		first = new_element_ptr;
	}
	last = new_element_ptr;
	size++;
	return true;
}
bool DoubleLinkedList::add(int data, int index) {
	if (index <= size) {
		ListElement* new_element_ptr = (ListElement*) malloc(sizeof(ListElement));
		new_element_ptr->data = data;
		new_element_ptr->next = 0;
		new_element_ptr->prev = 0;

		ListElement* post_insert_pos = first;
		ListElement* pre_insert_pos = 0;

		for (int i = 0; i < index; i++) {
			pre_insert_pos = post_insert_pos;
			post_insert_pos = post_insert_pos->next;
		}
		//Set next and prev pointer of new element
		new_element_ptr->next = post_insert_pos;
		//new_element_ptr->prev = post_insert->prev
		new_element_ptr->prev = pre_insert_pos;

		//prev pointer of next element
		//use either post_insert_pos OR curr_element_ptr->next
		if (post_insert_pos != 0) {
			post_insert_pos->prev = new_element_ptr;
		} else {
			last = new_element_ptr;
		}

		//next pointer of pref pointer
		//use either pre_insert_pos OR curr_element_ptr->prev
		if (pre_insert_pos != 0) {
			pre_insert_pos->next = new_element_ptr;
		} else {
			first = new_element_ptr;
		}
		size++;

		return true;
	} else {
		return false;
	}
}
bool DoubleLinkedList::remove(int index) {
	if (index < size) {
		ListElement* remove_elem = first;
		for (int i = 0; i < index; i++) {
			remove_elem = remove_elem->next;
		}
		if (remove_elem->prev != 0) {
			remove_elem->prev->next = remove_elem->next;
		} else {
			first = remove_elem->next;
		}

		if (remove_elem->next != 0) {
			remove_elem->next->prev = remove_elem->prev;
		} else {
			last = remove_elem->prev;
		}
		free(remove_elem);
		remove_elem = 0;
		size--;
		return true;
	} else {
		return false;
	}
}

void DoubleLinkedList::print(void) const {
	std::cout << "Here the elements should be printed, one by one" << std::endl;
}
DoubleLinkedList::~DoubleLinkedList() {
	std::cout<<"calling DLL dtor"<<std::endl;
	ListElement *curr_element_ptr = first;
	ListElement *next_element_ptr = curr_element_ptr;
	while (next_element_ptr != 0) {
		next_element_ptr = curr_element_ptr->next;
		free(curr_element_ptr);
		curr_element_ptr = next_element_ptr;
	}
}
