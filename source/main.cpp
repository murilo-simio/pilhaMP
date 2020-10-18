// Copyrigth 2020 Murilo Simionato Arnemann

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

#include "../include/pilha.hpp"
#include "../include/testa_pilha.hpp"

int main(){
    int x=0;
    pilhaArray PILHA;
    PILHA.createStack(5);
    cout << "size" << PILHA.size() << endl;
    cout << "empty? " << PILHA.isEmpty() << endl;
    cout << "full? " << PILHA.isFull() << endl;
    for (int i = 0; i < 5; i++) {
        PILHA.push(i);
    }
    cout << "empty? " << PILHA.isEmpty() << endl;
    cout << "full? " << PILHA.isFull() << endl;
    for (int i = 0; i < 5; i++) {
        PILHA.top();
        PILHA.pop();
    }
    cout << "empty? " << PILHA.isEmpty() << endl;
    cout << "full? " << PILHA.isFull() << endl;
    PILHA.destroyStack(PILHA);
    return 0;
}
