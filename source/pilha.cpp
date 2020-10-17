// Copyright 2020

#include "../include/pilha.hpp"

void pilhaArray::createStack(int val) {
    pilha = reinterpret_cast <classePilha*> (malloc(val*sizeof(classePilha)));
    TOP = -1;
    SIZE = val;
}

void pilhaArray::push(int val) {
    if (!isFull()) {
        TOP++;
        pilha[TOP].pilhaElem = val;
    } else {
        return;
    }
}

classePilha pilhaArray::pop() {
    ErrorCase.pilhaElem = -2;
    classePilha oldTop;
    if (!isEmpty()) {
        oldTop = pilha[TOP];
        TOP = TOP - 1;
        return oldTop;
    } else {
        return ErrorCase;
    }
}

classePilha pilhaArray::top() {
    ErrorCase.pilhaElem = -2;
    if (!isEmpty()) {
        return pilha[TOP];
    } else {
        return ErrorCase;
    }
}

bool pilhaArray::setSize(int val) {
    pilha = reinterpret_cast <classePilha*> (realloc(pilha, val*sizeof(classePilha)));
    SIZE = val;
    return true;
}

int pilhaArray::size() {
    return SIZE;
}

bool pilhaArray::isFull() {
    if (SIZE = TOP -1)
        return true;
    else
        return false;
}

bool pilhaArray::isEmpty() {
    if (TOP <= -1)
        return true;
    else
        return false;
}

void pilhaArray::destroyStock(pilhaArray x) {
    delete x.pilha;
    x.TOP = -1;
}