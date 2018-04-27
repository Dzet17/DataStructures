//
//  HashTable.hpp
//  DataStructures
//
//  Created by Zettler, Dylan on 4/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include "/Users/dzet4165/Documents/Data Structures/DataStructures/DataStructures/Model/Nodes/HashNode.hpp"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> ** internalStorage
    long size;
    double loadFactor;
    
    long getNextPrime(long current);
    void resize();
    
public:
    Hashtable();
    ~HashTable();
    
    void insert(Type data)
    
};

template <class Type>
HashTable<Type> :: HashTable()
{
    internalStorage = new HashNode<Type>*[101];
    size = 0;
    loadFactor = .80;
}

template <class Type>
HashTable<Type :: ~Hashtable()
{
    delete [] internalStorage;
}

template <class Type>
long HashTable<Type> :: getNextPrime(long currentNumber)
{
    return -1;
}

template <class Type>
void HashTable<Type> :: resize()
{
    
}

#endif /* HashTable_hpp */
