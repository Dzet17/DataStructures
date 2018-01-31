//
//  FileController.hpp
//  DataStructures
//
//  Created by Zettler, Dylan on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FileController()
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
}

#endif /* FileController_hpp */
