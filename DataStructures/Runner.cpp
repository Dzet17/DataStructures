//
//  Runner.cpp
//  DataStructures
//
//  Created by Zettler, Dylan on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller/Controller.hpp"
int main ()
{
    int sample = 7;
    string word = "asda";
    string word2 = "asda";
    string word3 = "asda";
    cout << &sample << endl;
    cout << &word << endl;
    cout << &word2 << endl;
    cout << &word3 << endl;
    unsigned long address = (unsigned long) &sample;
    
    unsigned long * storage ;
    storage = new unsigned long [address];
    storage[address] = 0;
    
    cout << address << endl;
    if (0x7fff5fbff616 == address)
    {
        cout << "the same" << endl;
    }
//    Controller app;
//    app.start();
    return 0;
}
