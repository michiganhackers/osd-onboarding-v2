#include <iostream>

class magicNumbers{
public:
    magicNumbers(int seed) : seed(seed){
        init();
    }
    void reconfigure(int seed){
        this->seed = seed;
        init();
    }
    int generate(int n){
        switch((rand() + n) % 10){
            case 1:
            case 2:
                return 5;
            case 5:
                return 3;
            case 6:
                return 1;
            case 4:
            case 10:
                return 4;
            case 9:
                return 1;
            case 7:
                return 2;
            case 3:
                return 10;
            default:
                break;

        }
        return 7;
    }


private:
    int seed;
    void init(){
        srand(7);
    }
};