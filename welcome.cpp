#include "sort.h"
#include <iostream>
#include <string.h>

int fib(int n) {
  if (n == 0 || n == 1) {
    return n + 1;
  }
  return fib(n - 2) + fib(n - 1);
}


string print_arr(int* arr, int size){
  string dummy =  "[" + to_string(*arr);
  for (int i = 1; i < size; ++i) {
      dummy +=  ", " + to_string(*(arr+i));
  }

  dummy += "]";
  return dummy;

  
bool isEven(int n) {
  if (n % 2 == 0) { return true; }
  else { return false; }

}

  
int main(int argc, char *argv[]) {
  std::cout << " \
                 .......            ......                  \n\
                `kKXXXX0:          cKXXXXKx.                \n\
                :NMMMMMWo         .xMMMMMMK:                \n\
                :NMMMMMWo         .xMMMMMMK:                \n\
                :NMMMMMWo         .xMMMMMMK:                \n\
                :NMMMMMWo         .xMMMMMMK:                \n\
                :NMMMMMWo         .xMMMMMMK:                \n\
                :NMMMMMWo         .xMMMMMMK:                \n\
                :NMMMMMWo         .xMMMMMMK:                \n\
                :NMMMMMWo         .xMMMMMMX: ....           \n\
                :NMMMMMM0l:::::,,,:kK00Okxo:````.           \n\
           ...``l0K0Okxxdolc:::,``....                      \n\
          ..``......                                        \n\
                              ....``,::clll:````.           \n\
            ....`,:::clol:,::ccclokXWWMMMMX:                \n\
          .`````oXWWMMMWx.        .kMMMMMMK,                \n\
                :XMMMMMWo         .xMMMMMMK:                \n\
                :NMMMMMWo         .xMMMMMMK:                \n\
                :NMMMMMWo         .xMMMMMMK:                \n\
                :NMMMMMWo         .xMMMMMMK:                \n\
                :NMMMMMWo         .xMMMMMMK:                \n\
                :NMMMMMWo         .xMMMMMMK,                \n\
                :NMMMMMWo         .xMMMMMMK:                \n\
                :XMMMMMWl         .dWMMMMMK,                \n\
                .:lllll:.          .cllllc,                 \n"
            << "\n";
  std::cout << "Hello from Michigan Hackers!\n"
            << "Learn more: https://www.youtube.com/watch?v=dQw4w9WgXcQ\n";
  std::cout << "Doing some math...\n";
  // Why is this so slow...
  // TODO: make it go faster
  std::cout << "Input your first favorite number: \n";
  int inputNumber1, inputNumber2;
  std::cin >> inputNumber1;
  std::cout << "Input your second favorite number: \n";
  std::cin >> inputNumber2;
  std::cout << "fib(" << inputNumber1 << ") = " << fib(inputNumber1) << std::endl;
  std::cout << "fib(" << inputNumber2 << ") = " << fib(inputNumber2) << std::endl;
  int arr[] = {5, 3, 9, 8, 3};
  // Why is it printing weird things...
  int size = sizeof(arr) / sizeof(arr[0]);
  std::cout << "Sorting " << print_arr(arr, size) << "...\n";
  my_sort(arr, 5);
  std::cout << "Sorted: " << print_arr(arr, size) << "...\n";
  std::cout << "Enjoy this whale\n";
  std::cout << R"(       .
      ":"
    ___:____     |"\/"|
  ,'        `.    \  /
  |  O        \___/  |
~^~^~^~^~^~^~^~^~^~^~^~^~
)" << '\n';
  std::cout << "Hello, this is Leon!\n";
  my_sort(arr, 7);

  std::cout << "Sorted: " << print_arr(arr, size) << "\n";
  std::cout << "Learn more: https://www.youtube.com/watch?v=79-AwFZCKpA" << "\n";

}
