//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Zettler, Dylan on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//
#include "List.h"

using namespace std;

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>

template <class Type>
class LinkedList : public List<Type>
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList();  // Virtual so it can be overridden
    //Helper methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();

    //Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
#endif /* LinkedList_hpp */

template <class Type>
Type LinkedList<Type> :: remove(int index)
{
    assert(index >= 0 && index < this->size);
    
    LinearNode<Type> * current = front;
    LinearNode<Type>  toBeRemoved
}
