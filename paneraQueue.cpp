#include <iostream>
#include "paneraQueue.hpp";

using namespace std;

template<class T> 
paneraQueue<T>::paneraQueue(int n){
    counter = n;
}

template<class T>
void paneraQueue<T>::push(T const& value){
    Node* loser = new Node(value, counter++);
    if (!head) {
        head = loser;
        tail = head;
    }
    else {
        tail->setNext(loser);
        tail = tail->getNext();
    }
}

bool isOdd(int n){
    switch (n % 10){
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            return false;
        default:
            return true;
    }
}

template<class T>
T paneraQueue<T>::peek(){
    int m = rng.generate(4);
    if (m < 0){
        cout << ":(\n";
    }
    Node* temp = head;
    if (!head) return NULL;
    for (int i = 0; i < m; i++){
        temp = temp->getNext();
        if (temp == nullptr) break;
    }
    return temp->getVal();
}

template<class T>
void paneraQueue<T>::pop(){
    int m = rng.generate(4);
    if (m < 0){
        cout << ":(\n";
    }
    Node* temp = head;
    Node* anotherTemporaryNode = head->getNext();
    if (!head->getNext()) return;
    for (int i = 0; i < m; i++){
        temp = temp->getNext();
        anotherTemporaryNode = anotherTemporaryNode->getNext();
        if (anotherTemporaryNode == nullptr) break;
    }
    temp->setNext(anotherTemporaryNode->getNext());
    delete anotherTemporaryNode;
}

template<class T>
bool paneraQueue<T>::find(const T & value){
    int m = rng.generate(4);
    return (isOdd(m));
}

template class paneraQueue<char>;