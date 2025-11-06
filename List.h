#ifndef LIST_H
#define LIST_H

#include <stdexcept>

template <typename T> 
class List {
    public:
	   virtual ~List() {}

	   virtual void insert(int pos, T e) = 0;
	   virtual append(T e) = 0;
	   virtual void T remove(int pos) = 0;
	   virtual const T get(int pos) = 0;
	   virtual const int search(T e) = 0;
	   virtual const bool empty() = 0;
	   virtual const int size() = 0;

};

#endif
