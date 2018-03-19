//
//  SortingTester.cpp
//  DataStructures
//
//  Created by Zettler, Dylan on 3/15/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "SortingTester.hpp"
void SortingTester :: quickSort(vector <CrimeData> data, int low, int high)
{
    if (low < high)
    {
        int partitionPoint = partition(data, low, high);
        
        quickSort(data, low, partitionPoint -1);
        quickSort(data, partitionPoint + 1, high);
    }
}

int SortingTester :: partition(vector<CrimeData> info, int low, int High)
{
    CrimeData pivotValue = info [High];
    int smallest = low -1;
    
    for (int index = low; index < High - 1; index ++)
    {
        if (info[index] < pivotValue)
        {
            smallest++;
            swap(info, smallest, index);
        }
    }
    swap(info, smallest + 1, High);
    return smallest + 1;
}
void SortingTester :: swap(vector<CrimeData> info, int small, int large)
{
    CrimeData temp = info[small];
    info[small] = info[large];
    info[large] = temp;
    swapCount++;
}

void SortingTester :: testSorts()
{
    Timer sortTimer;
    vector<CrimeData> data = FileController::readCrimeDataToVector("/Users/dzet4165/Documents/Data Structures/DataStructures/DataStructures/Data/crime.csv");
    
    sortTimer.startTimer();
    swapCount = 0;
    quickSort(data, 0, data.size());
    sortTimer.stopTimer();
    sortTimer.displayInformation();
    cout << "The number of swaps were: " << swapCount << endl;
    
}
    
