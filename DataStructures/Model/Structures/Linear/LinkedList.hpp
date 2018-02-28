//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Zettler, Dylan on 2/20/18.
//  Copyright © 2018 CTEC. All rights reserved.
//
#include "/Users/dzet4165/Documents/Data Structures/DataStructures/DataStructures/Model/Structures/List.h"
#include <stdio.h>

using namespace std; //Used for keyword access. Use this to make sure your pointers are pointing to the right things

#ifndef LinkedList_hpp
#define LinkedList_hpp

template <class Type>
class LinkedList : public List<Type>
{
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
    virtual void add(Type item);
    virtual void addAtIndex(int index, Type item);
    virtual Type getFromIndex(int index);
    virtual Type remove(int index);
//    Type setAtIndex(int index, Type item);
//    bool contains(Type item);
    
    LinkedList<Type> :: LinkedList();
    {
        this->front = nullptr;
        this->end = nullptr;
        this->size = 0;
    }
    
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
    void LinkedList<Type> :: add(Type item)
    {
        LinearNode<Type> * newData = new LinearNode<Type>(item);
        
        if(this->size == 0)
        {
            this->front = newData;
        }
        else
        {
            this->end->setNextNode(newData);
        }
        
        this->end = newData;
        
        this->size += 1;
    }
    void LinkedList<Type> :: addAtIndex(int index, Type item)
    {
        assert(index >= 0 && index <= this->size);
        if(index == this->size)
        {
            add(item)
        }
        else
        {
            LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
            if (index == 0)
            {
                toBeAdded->setNextNode(front);
                front = toBeAdded;
            }
            else
            {
                LinearNode<Type> * previous = nullptr;
                LinearNode<Type> * current = front;
                for (int position 0; position< index; position++ )
                {
                    previous = current;
                    current = current-> getNextNode();
                }
                previous->setNextNode(toBeAdded);
                toBeAdded->setNextNode(current);
            }
            this->size++;
        }
        
        Type LinkedList<Type> :: getFromIndex(int index)
        {
            assert(index >= 0 && index < this->size);
            Type data;
            
            LinearNode<Type> * current = front;
            
            for (int position = 0; position < index; position++)
            {
                current = current->getNextNode();
            }
            
            data = current->getData();
            
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
            
            LinkedList<CrimeData> FileController :: readDataToList(string fileName)
            {
                LinkedList<CrimeData> crimes;
                
                string currentCSVLine;
                int rowCount = 0;
                
                ifstream dataFile(fileName);
                
                //If the file exists at that path
                if ( dataFile.is_open())
                {
                    //Keep reading until you are at the end of the file
                    while (!dataFile.eof())
                    {
                        //Grab each line from the CCSV sepearated by the carriage return character
                        getLine(dataFile, currentCSVLine, '\r');
                        //Exclude header row
                        if (rowCount != 0)
                        {
                            CrimeData row(currentCSVLine);
                            crimes.add(row);
                        }
                    }
                    rowCount++;
                }
                dataFile.close();
            }
            else
            {
                cerr << "NO FILE" << endl
            }
            
            return crimes;
        };
    }
#endif /* LinkedList_hpp */
