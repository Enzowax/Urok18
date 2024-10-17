#include <iostream>
#include <windows.h>    
#include "Novikov.h" 

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 5;
    float arr[size] = { 4, 2, 9, 8, 7 };

    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    SortArray(arr, size);
    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    float* duplicatedArray = DuplicateArray(arr, size);

    cout << "Дублированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << duplicatedArray[i] << " ";
    }
    cout << endl;

    return 0;
}