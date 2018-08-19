/*
 * List.h
 *
 *  Created on: Jul 13, 2016
 *      Author: sasa
 */

#ifndef LIST_H_
#define LIST_H_
#include "Collection.h"

class List : public Collection {
public:
	List(int size):Collection(size) {}
	virtual ~List(void);
	virtual int get(int index) const = 0; //pure virtual function -> abstrakt.  muss definiert werden.
	virtual bool remove(int i) =0;
};

#endif /* LIST_H_ */
