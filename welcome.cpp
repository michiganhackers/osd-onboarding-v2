#include "sort.h"
#include <iostream>

int fib(int n) {
  if (n == 0 || n == 1) {
    return n + 1;
  }
  return fib(n - 2) + fib(n - 1);
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
  while (inputNumber1 > 25) {
    std::cout << "no." << std::endl;
    std::cout << "Try again." << std::endl;
    std::cin >> inputNumber1;
  }
  std::cout << "Input your second favorite number: \n";
  std::cin >> inputNumber2;
  while (inputNumber2 > 25) {
    std::cout << "stop it." << std::endl;
    std::cout << "Try again." << std::endl;
    std::cin >> inputNumber2;
  }
  std::cout << "fib(" << inputNumber1 << ") = " << fib(inputNumber1)
            << std::endl;
  std::cout << "fib(" << inputNumber2 << ") = " << fib(inputNumber2)
            << std::endl;
  int arr[] = {5, 3, 9, 8, 3};
  // Why is it printing weird things...
  std::cout << "Sorting " << arr << "...\n";
  my_sort(arr, 5);
  std::cout << "Sorted: " << arr << "\n";
  // Please delete the line below
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
  std::cout << "Sorted: " << arr << "\n";
}
