//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Zettler, Dylan on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "/Users/dzet4165/Documents/Data Structures/DataStructures/DataStructures/Model/Nodes/BinaryTreeNode.hpp"
#include "/Users/dzet4165/Documents/Data Structures/DataStructures/DataStructures/Model/Structures/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
};
#endif /* BinaryTreeTester_hpp */
