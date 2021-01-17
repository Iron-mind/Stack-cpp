/*
  Archivo: Elemento.tpp
  Autor: David T. Montoya
  <davidtovarmontoya@gmail.com>
  Fecha creacion: 2020-11-20
  Fecha ultima modificacion: 2020-11-20
  Version: 0.1
  Licencia: GPL
*/
//#include "Elemento.h"


//PENDIENTES
//*crear una escepción para element, si le piden el valor del siguiente, pero es un puntero nullo el siguiente
//crear un operator '=' para asignar nuevo valor
//lanzar escepcion cuando el siguiente es nullptr pero le pides metodo
template<class TIPO>
Element<TIPO>::Element(TIPO item,Element<TIPO> *next)
{
  this->Value=item;
  this->next=next;

}

template<class TIPO>
Element<TIPO>::~Element()
{

}
template<class TIPO>
TIPO Element<TIPO>::valueNext()
{
   return next->value();
}

template<class TIPO>
TIPO Element<TIPO>::value()
{

  return Value;
}

template<class TIPO>
void Element<TIPO>::changeNext(Element<TIPO> *replacer)
{
  next=replacer;
}

template<class TIPO>
Element<TIPO> *Element<TIPO>::pointerNext()
{
  return next;
}