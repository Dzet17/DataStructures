//
//  RecursionTester.hpp
//  DataStructures
//
//  Created by Zettler, Dylan on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef RecursionTester_hpp
#define RecursionTester_hpp

#include <iostream>
#include <string>
#include "/Users/dzet4165/Documents/Data Structures/DataStructures/DataStructures/Controller/Tools/Timer.hpp"

using namespace std;

class RecursionTester
{
private:
    int fib(int start);
    string mystery(string word);
public:
    void testRecursionNumbers();
    void testRecursionString();

};

#endif /* RecursionTester_hpp */
