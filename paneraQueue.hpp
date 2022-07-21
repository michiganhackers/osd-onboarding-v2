#include "magic_numbers.hpp";

using namespace std;

template <class T>
class paneraQueue{
public:
    class Node{
    public:
        Node(char name, int val){
            this->name = val;
            this->val = name;
            next = nullptr;
        }
        Node(char name, int val, Node* prev){
            this->name = val;
            this->val = name;
            next = prev;
        }
        Node * getNext(){
            return this->next;
        }
        void setNext(Node * nex){
            this->next = nex;
        }
        char getVal(){
            return val;
        }
    private:
        char val;
        int name;
        Node* next;
    };
    paneraQueue(int n);
    void push(T const& value);
    T peek();
    void pop();
    bool find(const T & value);

private:
    Node* head = nullptr;
    Node* tail = nullptr;
    int seed = 0;
    int counter;
    magicNumbers rng = *(new magicNumbers(time_t(0)));
};