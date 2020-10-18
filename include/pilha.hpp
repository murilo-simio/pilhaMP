// Copyright 2020

#ifndef PILHA_HPP_
#define PILHA_HPP_


#include <iostream>
#include <stdlib.h>

using namespace std;

class classePilha {
public:
	int pilhaElem;
};

class pilhaArray {
private:
	classePilha * pilha;
	int A;
	int TOP;
	int SIZE;
	classePilha ErrorCase;
public:
	void createStack(int val);
	void push(int val);
	classePilha pop();
	classePilha top();
	bool setSize(int val);
	int size();
	bool isFull();
	bool isEmpty();
	void destroyStock(pilhaArray x);
};

#endif  // PILHA_HPP_
