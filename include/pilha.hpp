// Copyright 2020

#ifndef PILHA_HPP_
#define PILHA_HPP_

#include <iostream>
#include <cstdlib>

using namespace std;

//! classePilha
/*!
  Uma classe que contém o elemento da pilha.
 */
class classePilha {
 public:
    int pilhaElem;
};

//! pilhaArray
/*!
  Uma classe que contém os métodos e atributos da pilha.
 */
class pilhaArray {
 private:
    classePilha * pilha; /*!< Atributo da pilha onde são salvos os elementos */
    int TOP; /*!< Atributo que guarda onde está o topo da pilha */
    int SIZE; /*!< Atributo que guarda o tamanho da pilha */
    classePilha ErrorCase; /*!< Atributo para retornar erros */
 public:
    void createStack(int val); /*!< Método para criar a pilha */
    void push(int val); /*!< Método para adicionar elemento na pilha */
    classePilha pop(); /*!< Método para remover elemento da pilha */
    classePilha top(); /*!< Método para ver elemento do topo da pilha */
    bool setSize(int val); /*!< Método para alterar tamanho da pilha */
    int size(); /*!< Método para ver tamanho da pilha */
    bool isFull(); /*!< Método para verificar se pilha está cheia */
    bool isEmpty(); /*!< Método para verifciar se pilha está vazia */
    bool destroyStack(pilhaArray x); /*!< Método para destruir pilha */
};

#endif  // PILHA_HPP_
