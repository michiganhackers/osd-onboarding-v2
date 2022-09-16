#include <cstdlib>
#include <iostream>
using namespace std;

int is_sorted(int *arr, int n) {
   while ( --n >= 1 ) {
      if ( arr[n] < arr[n-1] ) {
         return 0;
      }
   }
   return 1;
}

void shuffle(int *arr, int n) {
   int temp, r;
   for(int i=0; i < n; i++) {
      temp = arr[i];
      r = rand() % n;
      arr[i] = arr[r];
      arr[r] = temp;
   }
}

void my_sort(int *arr, int n) {
   while (!is_sorted(arr, n)) {
      shuffle(arr, n);
   }
}
