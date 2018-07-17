/*
 * LinkedList.cpp
 *
 *  Created on: Jun 23, 2016
 *      Author: sasa
 */

#include "SingleLinkedList.h"

#include <stdlib.h>
#include <iostream>
SingleLinkedList::SingleLinkedList() : LinkedList(0,0,0) {
}
bool SingleLinkedList::add(int data) {
	ListElement* new_element_ptr = (ListElement*) malloc(sizeof(ListElement));
	new_element_ptr->data = data;
	new_element_ptr->next = 0;
	if (first == 0) {
		first = new_element_ptr;
	} else {
		last->next = new_element_ptr;
	}
	last = new_element_ptr;
	size++;
	return true;
}
bool SingleLinkedList::add(int data, int index) {
	if (index < size) {
		ListElement* new_element_ptr = (ListElement*) malloc(sizeof(ListElement));
		new_element_ptr->data = data;
		new_element_ptr->next = 0;

		ListElement* post_insert_pos = first;
		ListElement* pre_insert_pos = 0;

		for (int i = 0; i < index; i++) {
			pre_insert_pos = post_insert_pos;
			post_insert_pos = post_insert_pos->next;
		}

		new_element_ptr->next = post_insert_pos;
		if (post_insert_pos == first) {
			first = new_element_ptr;
		}

		if (pre_insert_pos == last) {
			last = new_element_ptr;
		}
		if (pre_insert_pos != 0) {
			pre_insert_pos->next = new_element_ptr;
		}
		size++;
		return true;
	} else {
		return false;
	}
}
bool SingleLinkedList::remove(int index) {
	if (index < size) {
		ListElement* remove_elem = first;
		ListElement* pre_remove_pos = 0;
		for (int i = 0; i < index; i++) {
			pre_remove_pos = remove_elem;
			remove_elem = remove_elem->next;
		}

		if (pre_remove_pos == 0) {
			first = remove_elem->next;
		} else {
			pre_remove_pos->next = remove_elem->next;
		}
		free(remove_elem);
		remove_elem = 0;
		size--;
		return true;
	} else {
		return false;
	}

}

void SingleLinkedList::print() const {
	//Meine Lösung:
	//ListElement *firstPtr = first;
	//while(firstPtr != NULL){
	//	std::cout<<firstPtr->data<<std::endl;
//		firstPtr = firstPtr->next;

	std::cout << "Here the elements should be printed, one by one" << std::endl;
	//Seine lösung:
	std:: cout << *this;
}

SingleLinkedList::~SingleLinkedList() {
	std::cout<<"calling SLL dtor"<<std::endl;
	ListElement *curr_elem = first;
	ListElement *next_elem = curr_elem;
	while (next_elem != 0) {
		next_elem = curr_elem->next;
		free(curr_elem);
		curr_elem = next_elem;
	}
}
int SingleLinkedList::get(int index) const {
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
