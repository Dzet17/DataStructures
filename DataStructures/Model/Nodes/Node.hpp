//
//  Node.hpp
//  DataStructures
//
//  Created by Zettler, Dylan on 2/6/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
class Node {};
{
//This section is available to ALL the subclasses of Node
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

template <class Type>
Node<Type> :: Node()
{
    //Needed for default constructor compilation
    //Since when we create a structure it does no have an item to store yet
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}

template <class Type>
type Node<Type> :: getData()
{
    return data;
}
#endif /* Node_hpp */
