/*
  Archive: Element.h
  Author: David T. Montoya
  <davidtovarmontoya@gmail.com>
  start date: 2020-11-20
  last date modified 2021-3-13
  Version: 0.1
  licence: GPL
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
/**    value next element (type of data that you declared)
*/
    void changeNext(Element<TIPO> *replacer);
    /** replace pointer to next element
    */
    Element<TIPO> *pointerNext();
/**    return pointer to next element (type of data that you declared)
*/

    TIPO value();
    /** return Value (type of data that you declared)**/

    void operator = (const TIPO &newValue);
    /** replaces value. now is newValue (type of data that you declared) */
};

#include"Element.tpp"

#else
  template<class TIPO> class Element;
#endif
