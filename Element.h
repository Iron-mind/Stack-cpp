/*
  Archivo: Pila.h
  Autor: David T. Montoya
  <davidtovarmontoya@gmail.com>
  Fecha creacion: 2020-11-20
  Fecha ultima modificacion: 2020-11-20
  Version: 0.1
  Licencia: GPL
*/
#include<iostream>
#include<string>
using namespace std;


#ifndef HH_ELEMENT
#define HH_ELEMENT

template<class TIPO> 
class Element
{
  private:
    TIPO Value;
    Element<TIPO> *next;

  public:
//    Elemento<TIPO> * operator [] (int indice);  // Sobrecarga de operadores (y no la vamos a ver)
    /** Constructor, que crea un Elemento<TIPO> con un valor concreto
        - Entrada: el valor string
    */
    Element(TIPO item, Element<TIPO> *next);
    /** Destructor. No hace nada
    */
    ~Element();
    /** Hace una copia profunda, cediendo propiedad de la copia
    */

    TIPO valueNext();
    /** Modificar el siguiente Elemento<TIPO>, para que apunte a otro
        - Entrada: el nuevo Elemento<TIPO>
        - Salida: ninguna
    */
    void changeNext(Element<TIPO> *replacer);
    /** Me dice cuanto vale un Elemento<TIPO>
        - Entrada: ninguna
        - Salida: el valor de ese elemento
    */
    Element<TIPO> *pointerNext();
    TIPO pushTop();
    TIPO value();
};

#include"Element.tpp"

#else
  template<class TIPO> class Element;
#endif
