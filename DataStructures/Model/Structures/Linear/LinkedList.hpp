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
LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->size = 0;
}

template <class Type>
LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * detroyStructure = front;
    while (front != nullptr)
    {
        front = destroyStructure->getNextNode();
        delete destroysStructure
        destroyStructure = front;
    }
}

template <class Type>
int LinkedList<Type> :: getSize() const
{
    return this -> size;
}

template <class Type>
LinearNode<Type> * LinkedList<Type> :: getFront()
{
    return this -> front;
}

template <class Type>
Type LinkedList<Type> :: remove(int index)
{
    assert(index >= 0 && index < this->size);
    
    LinearNode<Type> * current = front;
    LinearNode<Type> * toBeRemoved = nullptr;
    LinearNode<Type> * previous = nullptr;
    
    Type removedData;
    
    if (index == 0)
    {
        toBeRemoved = front;
        this->front = this->front->getNextNode();
    }
    else
    {
        for (int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNextNode
        }
        
        toBeRemoved = current;
        
        if (index == this->size - 1)
        {
            previous->setNextNode(nullptr);
            end = previous;
        }
        else
        {
            current = toBeRemoved->getNextNode();
            previous->setNextNode(current);
        }
    }
    this.size -= 1;
    
    removedData =toBeRemoved->getData();
    delete toBeRemoved;
    return removedData;
}

LinearNode<Type> * LinkedList<Type> :: getEnd()
{
    return this -> end;
}

LinearNode<Type> * LinkedList<Type> :: getFront()
{
    return this -> front;
}

int LinkedList<Type> :: getSize() const
{
    
}
#endif /* LinkedList_hpp */
