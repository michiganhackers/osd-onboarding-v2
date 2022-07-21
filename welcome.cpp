#include <iostream>
#include "paneraQueue.hpp"

void init(paneraQueue<char> &q){
  q.push('A');
  q.push('B');
  q.push('D');
  q.push('E');
  q.push('F');
  q.push('G');
  q.push('U');
  q.push('I');
  q.push('J');
  q.push('L');
  q.push('O');
  q.push('N');
}

void printBlue(paneraQueue<char> &PQ){
  init(PQ);
  magicNumbers rng = magicNumbers(0);
  for (int i = 0; i < 2; i++){
    std::cout << PQ.peek();
    PQ.pop();
  }
  std::cout << " ";
  for (int i = 0; i < 3; i++){
    std::cout << PQ.peek();
    PQ.pop();
  }
  std::cout << "E!" << std::endl;
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
                .:lllll:.          .cllllc,                 \n" << std::endl;
    std::cout << "Hello from Michigan Hackers!\n";
    std::cout << "Learn more: https://www.youtube.com/watch?v=dQw4w9WgXcQ" << std::endl;
    paneraQueue<char> PQ(0);
    printBlue(PQ);
}