//
//  List.h
//  DataStructures
//
//  Created by Zettler, Dylan on 2/8/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef List_h
#define List_h

#include <assert.h>
#indlude "../../Nodes/LinearNode.hpp"

protected:
    int size;

public:
    //Structure
virtual void add(Type item) = 0;
virtual void addAtIndex(int index, Type item) = 0;
virtual Type remove(Type item) 0;
virtual Type getFromIndex(int index) = 0;
//Helper
virtual int getSize() const = 0;
virtual LinearNode<Type> * getFront() = 0;
virtual LinearNode<Type> * getEnd() = 0;

#endif /* List_h */
