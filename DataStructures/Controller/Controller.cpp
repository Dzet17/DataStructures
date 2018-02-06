//
//  Controller.cpp
//  DataStructures
//
//  Created by Zettler, Dylan on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include "FileController.hpp"
#include "ArrayTester.hpp"

using namespace std;

void Controller :: start()
{
    ArrayTester myTest;
    myTest.testArrayUse();
    myTest.testAdvancedArray();
    
//     findMaxAndMin();
//
//     testArray();
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/dzet4165/Downloads/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 0; index < myData.size(); index++)
    {
        if (myData [minIndex] < myData [index])
        {
            minIndex = index;
        }
        
        if (myData [maxIndex] > myData[index])
        {
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    
    cout << "The smallest Crime stat is at " << minIndex << " " << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
    {
        cout << "Testing the Timer class" << endl;
        Timer codeTimer;
        codeTimer.startTimer();
        cout << "Print to the screen some text" << endl;
        codeTimer.startTimer();
        codeTimer.displayInformation();
        
        codeTimer.resetTimer();
        codeTimer.startTimer();
        for (int index = 0; index < 300; index++)
        {
            cout << "The index is" << index << "\t";
        }
        codeTimer.stopTimer();
        codeTimer.displayInformation();
        
    }
}


