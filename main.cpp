/*
  Archivo: main.tpp
  Autor: David T. Montoya
  e-mail: <davidtovarmontoya@gmail.com>
  date start: 2020-11-20
  Fdate last mod: 2020-11-20
  Version: 0.2
  Licencia: GPL
*/
#include "Element.h"
#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    //testing element template
    Element<int> one(1, nullptr);
    Element<int> two(2, &one);
    Element<double> treeDec(3.44, nullptr );
    Element<double> fourDec(4.55, &treeDec );
    Element<string> hello("Hi,", nullptr );
    Element<string> world("world", &hello );



    Stack<int> pila;

    cout<< "hla"<<endl<< two.valueNext() <<endl;
    cout<< "prueba "<<"lenght de la pila: "<<  pila.len()<<endl;

    Stack<string> cadenas;
    cadenas.push("entonces");
    cadenas.push("qué pasó");
    cadenas.push("con el ");
    cadenas.push("programador x");
    cout<<"Pila hecha en c++, esta es lo grande de la pila: "<<cadenas.len()<<endl;

    cadenas.pop();

    cout<<"Este es el top de la pila:  "<<"'"+cadenas.top()+"'"<<endl;
    //no olvidar: valgrind --tool=memcheck --leak-check=full ./main
    //para los memoryleaks


    //comandos para compilar
    // $ g++ main.cpp -o Pila
    // $ ./Pila
    return 0;
}
