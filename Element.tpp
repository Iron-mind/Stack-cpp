/*
  Archive: Element.tpp
  Author: David T. Montoya
  <davidtovarmontoya@gmail.com>
  start date: 2020-11-20
  last date modified 2021-3-13
  Version: 0.1
  licence: GPL
*/



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
    if(next==nullptr)
        throw string(" you are calling '.valueNext' of last element. Next is nullptr, value not found");
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

template<class TIPO>
void Element<TIPO>:: operator = (const TIPO &newValue)
{
    Value=newValue;
}
