// Copyright 2020

#include "../include/pilha.hpp"

#include <iostream>
#include <cstdlib>

//! createStack
/*! Método que cria uma pilha com o tamanho desejado.
    \param val Um número inteiro
 */
void pilhaArray::createStack(int val) {
    pilha = reinterpret_cast <classePilha*> (malloc(val*sizeof(classePilha))); /*!< Aloca os espaço para criar a pilha. */
    TOP = -1; /*!< Define o topo da pilha como -1 para sinalizar que ela está vazia. */
    SIZE = val; /*!< Define o tamanho da pilha de acordo com o que foi passado. */
}

//! push
/*! Método que adiciona um elemento na pilha.
    \param val Um número inteiro
 */
void pilhaArray::push(int val) {
    if (!isFull()) { /*!< Verifica se a pilha está cheia */
    TOP++; /*!< Move o topo da pilha */
    pilha[TOP].pilhaElem = val; /*!< Adiciona o novo elemento como novo topo */
    } else {
        return; }
}

//! pop
/*! Método que retira um elemento da pilha */
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

//! top
/*! Método que retorna o elemento que está no topo da pilha */
classePilha pilhaArray::top() {
    ErrorCase.pilhaElem = -2;
    if (!isEmpty()) { /*!< Verifica se a pilha não está vazia */
        return pilha[TOP]; /*!< Retorna o elemento do topo da pilha */
    } else {
        return ErrorCase; /*!< Se a pilha estiver vazia retorna erro */
    }
}

//! setSize
/*! Método que modifica o tamanho da pilha.
    \param val Um número inteiro
 */
bool pilhaArray::setSize(int val) {
    pilha = reinterpret_cast <classePilha*>
    (realloc(pilha, val*sizeof(classePilha))); /*!< Realoca a lista com o novo tamanho */
    SIZE = val; /*!< Salva o novo tamanho */
    return true;
}

//! size
/*! Método que retorna o tamanho da pilha. */
int pilhaArray::size() {
    return SIZE;
}

//! isEmpty
/*! Método que verifica se a pilha está vazia. */
bool pilhaArray::isEmpty() {
    if (TOP <= -1)
        return 1;
    else
        return 0;
}

//! createStack
/*! Método que verifica se a pilha está cheia. */
bool pilhaArray::isFull() {
    if (SIZE == TOP - 1)
        return 1;
    else
        return 0;
}

//! createStack
/*! Método que destrói a pilha
    \param x Um parâmetro do tipo pilhaArray
 */
bool pilhaArray::destroyStack(pilhaArray x) {
    delete x.pilha;
    x.TOP = -1;
    return true;
}
