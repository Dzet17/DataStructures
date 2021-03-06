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
#include <cmath>
#include <assert.h>

template <class Type>
class Hashtable
{
private:
    HashNode<Type> ** internalStorage
    long size;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertedNode);
    long handleCollision(long index);
    
public:
    Hashtable();
    ~HashTable();
    
    void insert(Type data)
    long getSize();

};

HashNode<Type> * get(long index);
bool contains(HashNode<Type> * value);

template <class Type>
HashNode<Type> * Hashtable<Type> :: get(long index)
{
    assert(index < capacity);
    return internalStorage[index];
}

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
    long nextPrime =(this->capacity * 2) + 1;
    
    while(!isPrime += 2;)
    {
        return nextPrime;
    }
    return nextPrime;
}

template <class Type>
long Hashtable<Type> :: handleCollosion(HashNode<Type> * current, long index)
{
    long shift = 17;
    
    for (long position = currentPosition + shift; position != currentPosition; position += shift)
    {
        if(position >= capacity)
        {
            position = position % capacity;
        }
        
        if(internalStorage[position] == nullptr)
        {
            return position;
        }
    }
    
    return -1;
}

template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * insert)
{
    long insertPosition = insert->getKey() % this->capacity;
    return insertPosition;
}

template <class Type>
void Hashtable<Type> :: resize()
{
    long updatedCapacity = nextPrime()_;
    HashNode<Type> ** tempStorage = new HashNode<Type> * [updatedCapacity];
    
    std :: fill_n(tempStorage, updatedCapacity, nullptr);
    
    long oldCapacity = this->capacity; [index++];
    this->capacity = updatedCapacity;
    
    for (long index = 0; index < oldCapacity; index++)
    {
        if(hashTableStorage[index] != nullptr)
        {
            HashNode<Type> * temp = internalStorage[index];
            
            long position = findPosition(temp);
            if ( tempStorage[position] == nullptr)
            {
                tempStorage[position] = temp;
            }
            else
            {
                long updatedPosition = handleCollision(temp, position);
                if (updatedPosition != -1)
                {
                    tempStorage[updatedPosition] = temp;
                }
            }
        }
    }
    internalStorage = tempStorage;
}

template <class Type>
void Hashtable<Type> :: insert(Type value)
{
    this->size++;
    if(((this->size * 1.000) / this->capacity) > this->loadFactor)
    {
        resize();
    }
    
    HashNode<Type> * temp = new HashNode<Type>(value);
    long index = findPosition(temp);
    
    if(internalStorage[index] == nullptr)
    {
        internalStorage[index] = temp;
    }
    else
    {
        long updatedPosition = handleCollision(index);
        if (updatedPosition != -1)
        {
            internal[updatedPosition] = temp;
        }
    }
    
}

template <class Type>
bool HashTable<Type> :: contains(Hashnode<Type> * value)
{
    if (internalStorage[findPosition(value)]->getData())
    {
        return true;
    }
    
    long other = handleCollision(findPosition(value));
    if (internalStorage[other]->getData() == value->getData())
}
#endif /* HashTable_hpp */
