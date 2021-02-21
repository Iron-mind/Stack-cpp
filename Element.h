/*
  Archive: Element.h
  Author: David T. Montoya
  <davidtovarmontoya@gmail.com>
  Start date: 2020-11-20
  Date last modified: 2021-1-29
  Version: 0.1
  Licence: GPL
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
    /** Constructor
    */
    Element(TIPO item, Element<TIPO> *next);
    /** Destructor. No hace nada
    */
    ~Element();

    /** Return value of  linked Element<TIPO>,
       */
    TIPO valueNext();

    void changeNext(Element<TIPO> *replacer);
    /** Me dice cuanto vale un Elemento<TIPO>
        - Entrada: ninguna
        - Salida: el valor de ese elemento
    */
    Element<TIPO> *pointerNext();
    TIPO pushTop();
    TIPO value();
    /**operator= (TIPO value);**/

    void operator = (const TIPO &newValue);
};

#include"Element.tpp"

#else
  template<class TIPO> class Element;
#endif
