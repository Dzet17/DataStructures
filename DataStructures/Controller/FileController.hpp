//
//  FileController.hpp
//  DataStructures
//
//  Created by Zettler, Dylan on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include "../Data/CrimeData.hpp"
#include "/Users/dzet4165/Documents/Data Structures/DataStructures/DataStructures/Model/Structures/Linear/LinkedList.hpp"
#include <fstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
};


#endif /* FileController_hpp */
