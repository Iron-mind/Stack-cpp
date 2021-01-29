/*
  Archivo: Pila.h
  Autor: Davi T. Montoya
  <davidtovarmontoya@gmail.com>
  Fecha creacion: 2020-11-20
  Fecha Ãºltima modificacion: 2020-11-20
  VersiÃ³n: 0.1
  Licencia: GPL

*/
#ifndef STACK_H
#define STACK_H
#include "Element.h"
#include<string>
#include<iostream>
using namespace std;


template<class TIPO>
class Stack
{
  private:
    Element<TIPO> *Top;
    int length;
    Element<TIPO> *last;

  public:
//    Pila<TIPO> * operator [] (int indice);  // Sobrecarga de operadores (y no la vamos a ver)
    /** Constructor, que crea un Pila<TIPO> con un valor concreto
        - Entrada: el valor string
    */
    Stack();
    /** Destructor. No hace nada
    */
    ~Stack();
    
    
    TIPO top();
   
    
    void push(TIPO item);

    TIPO pop();

    int len();


    void  operator + (const Stack<TIPO> stackConcat);

    

    
   
};

#include"Stack.tpp"

#else
  template<class TIPO> class Stack;
#endif