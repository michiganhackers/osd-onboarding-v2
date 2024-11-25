#include "sort.h"
#include <iostream>


int main() {
    int arr[] = {1,2,3,6,5,4,9,8,10,11,15,15,14};

    std::cout << "Sorting ";
    for (int i = 0; i < 13; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "...\n";


    int len = my_sort(arr, 13);


    std::cout << "Sorted ";
    for (int i = 0; i < len; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "...\n";


    return 0;
}