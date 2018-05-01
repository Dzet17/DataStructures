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
    long nextPrime =(this->capacity * 2) + 1;
    
    while(!isPrime += 2;)
    {
        return nextPrime;
    }
    return nextPrime;
}

template <class Type>
void HashTable<Type> :: resize()
{
    
}

template <class Type>
void Hashtable<Type> :: insert(Type value)
{
    
}

template <class Type>
bool HashTable<Type> :: isPrime(long current)
{
    if(candidateNumber <= 1)
    {
        return false;
    }
    else if(current == 2 || current == 3)
    {
        return true;
    }
    else if(current % 2 == 0)
    {
        return false;
    }
    else
    {
        for(int next = 3; next <= sqrt(current) +1; next += 2)
        {
            if(current % next == 0)
            {
                return false;
            }
        }
        return true;
    }
}
template <class Type>
long hashTable<Type> :: getNextPrime()
{
    return -1;
}

template <class Type>
long Hashtable<Type> :: handleCollosion(HashNode<Type> * current, long index)
{
    return -1;
}
#endif /* HashTable_hpp */
