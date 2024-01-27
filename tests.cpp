#include <cassert>
#include "sort.h"

void test()
{
    int arr[] = {5, 3, 10, 29, 80};
    const int arr_size = 5;
    my_sort(arr, arr_size);
    assert(arr[0] == 3);
    assert(arr[1] == 5);
    assert(arr[2] == 10);
    assert(arr[3] == 29);
    assert(arr[4] == 80);
}

int main()
{
    test();
    cout << "Passed all tests!" << endl;
}