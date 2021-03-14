/*
  Archivo: Pila.h
  Autor: Davi T. Montoya
  <davidtovarmontoya@gmail.com>
  start date: 2020-11-20
  last date modified 2021-3-13
  Version: 0.1
  licence: GPL

*/
#ifndef STACK_H
#define STACK_H
#include "Element.h"
#include<string>
#include<iostream>
#include <typeinfo>
using namespace std;


template<class TIPO>
class Stack
{
  private:
    int length;
    Element<TIPO> *Top;


public:
    Stack();
    ~Stack();
    /* return top element */
    TIPO top();

    /*insert element in the top, does not delete something*/
    void push(TIPO item);

    /*delete top element and return it*/
    TIPO pop();

    /*return size of the stack*/
    int len();

   
};

#include"Stack.tpp"

#else
  template<class TIPO> class Stack;
#endif