#include <cstdlib>
#include <iostream>
using namespace std;

// STALIN SORT
int my_sort(int *arr, int n) {
   int current = 0;
   for (int i = 1; i < n; i++) {
      if (arr[i] >= arr[current]) {
         arr[++current] = arr[i];
      }
   }

   return current+1;
}