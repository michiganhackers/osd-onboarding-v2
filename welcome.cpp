#include <iostream>
#include "sort.h"

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 2) + fib(n - 1);
}

int main(int argc, char *argv[])
{
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
              << std::endl;
    std::cout << "Hello from Michigan Hackers!\n";
    std::cout << "Learn more: https://www.youtube.com/watch?v=dQw4w9WgXcQ" << std::endl;

    std::cout << "Doing some math...\n";
    std::cout << "fib(6) = " << fib(6) << std::endl;
    // Why is this so slow...
    // TODO: make it go faster
    std::cout << "fib(42) = " << fib(42) << std::endl;

    int arr[] = {5, 3, 9, 8, 3};
    // Why is it printing weird things...
    std::cout << "Sorting " << arr << "...\n";
    my_sort(arr, 5);
    std::cout << "Sorted: " << arr << std::endl;

    std::cout << "Hello" << std::endl;
}
