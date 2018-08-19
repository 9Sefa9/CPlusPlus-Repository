/*
 * Collection.h
 *
 *  Created on: Jul 13, 2016
 *      Author: sasa
 */

#ifndef COLLECTION_H_
#define COLLECTION_H_
#include <ostream>

class Collection {
protected:
	int size;
public:
	Collection(int size):size(size) {}
	virtual ~Collection(void);
	virtual bool isEmpty(void) const;
	virtual bool add(int i) = 0;
	virtual bool add(int i, int j) = 0;
	virtual void print(void) const = 0;
	virtual int getSize() const;

};


#endif /* COLLECTION_H_ */
