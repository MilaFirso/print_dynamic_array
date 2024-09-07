#include "PrintDynamicArray.h"

void Print_Dynamic_Array(int* arr, int arrActualSize, int arrLogicalSize)
{
    std::cout << "Динамический массив: ";

    for (int i = 0; i < arrLogicalSize; i++)
    {
        std::cout << " ";
        std::cout << arr[i];
    };

    for (int i = arrLogicalSize; i < arrActualSize; i++)
    {
        std::cout << " ";
        std::cout << "_";
    };

    std::cout << std::endl;
};