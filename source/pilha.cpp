// Copyright 2020

#include "../include/pilha.hpp"

// Metodo que cria e define o tamanho da pilha
void pilhaArray::createStack(int val) {
    pilha = reinterpret_cast <classePilha*> \
    (malloc(val*sizeof(classePilha)));
    TOP = -1;
    SIZE = val;
}

// Metodo que insere um novo item na pilha
void pilhaArray::push(int val) {
    if (!isFull()) {
    TOP++;
    pilha[TOP].pilhaElem = val;
    } else {
        return; }
}

// Metodo que retira o item que esta no TOP da pilha
classePilha pilhaArray::pop() {
    ErrorCase.pilhaElem = -2;
    classePilha oldTop;
    if (!isEmpty()) {
        oldTop = pilha[TOP];
        TOP = TOP -1;
        return oldTop;
    } else {
        return ErrorCase;
    }
}


// Metodo que verifica e retorna qual o item que esta no TOP da pilha
classePilha pilhaArray::top() {
    ErrorCase.pilhaElem = -2;
    if (!isEmpty()) {
        return pilha[TOP];
    } else {
        return ErrorCase;
    }
}

// Metodo que muda o tamanho da pilha
bool pilhaArray::setSize(int val) {
    pilha = reinterpret_cast <classePilha*>
     (realloc(pilha, val*sizeof(classePilha)));
    SIZE = val;
    return true;
}


// Metodo que retorna o tamanho atual da pilha
int pilhaArray::size() {
    return SIZE;
}

// Metodo que verifica se a pilha esta vazia
bool pilhaArray::isEmpty() {
    if (TOP <= -1)
        return 1;
    else
        return 0;
}

// Metodo que verifica se a pilha esta cheia
bool pilhaArray::isFull() {
    if (SIZE == TOP - 1)
        return 1;
    else
        return 0;
}

// Metodo que destroi a pilha
bool pilhaArray::destroyStack(pilhaArray x) {
    delete x.pilha;
    x.TOP = -1;
    return true;
}
