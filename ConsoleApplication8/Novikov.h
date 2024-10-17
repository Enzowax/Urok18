#pragma once
#include <algorithm> 
#include <sstream>   
#include <string>

std::string SortArray(const float arr[], int size)
{
    float* sortedArr = new float[size]; 

    for (int i = 0; i < size; ++i) {
        sortedArr[i] = arr[i];
    }

    std::sort(sortedArr, sortedArr + size);

    std::ostringstream result;
    for (int i = 0; i < size; ++i) {
        result << sortedArr[i] << " ";
    }

    delete[] sortedArr;  
    return result.str();  
}

std::string DuplicateArray(const float arr[], int size)
{
    std::ostringstream result;


    for (int i = 0; i < size; ++i) {
        result << arr[i] << " ";
    }

    return result.str(); 
}
