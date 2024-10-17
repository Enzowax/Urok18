#include <iostream>
#include <windows.h>    
#include "Novikov.h" 
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 5;
    float arr[size] = { 4, 2, 9, 8, 7 };

    cout << "Отсортированный массив: " << SortArray(arr, size) << endl;

    cout << "Дублированный массив: " << DuplicateArray(arr, size) << endl;

    return 0;
}
