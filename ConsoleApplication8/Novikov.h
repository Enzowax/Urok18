#pragma once
#include <string>
#include <algorithm>  

using namespace std;

void SortArray(float arr[], int size)
{
    sort(arr, arr + size); 
}

float* DuplicateArray(const float arr[], int size)
{
    float* newArr = new float[size];  
    for (int i = 0; i < size; ++i)
    {
        newArr[i] = arr[i];  
    }
    return newArr;  
}
