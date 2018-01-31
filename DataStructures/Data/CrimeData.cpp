//
//  CrimeData.cpp
//  DataStructures
//
//  Created by Zettler, Dylan on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    cout << "Testing the timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/full/path/to/crime.csv");
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
}
