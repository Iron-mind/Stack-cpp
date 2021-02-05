/*
  Archivo: Stack.tpp
  Autor: David T. Montoya
  <davidtovarmontoya@gmail.com>
  start date: 2020-11-20
  Fecha ultima modificacion: 2020-11-20
  Version: 0.1
  Licencia: GPL
*/
template<class TIPO>
Stack<TIPO>::Stack()
{
  this-> Top=nullptr;
  this->length=0;

}
template<class TIPO>
void destructor(TIPO *pointer)
{
    if (pointer == nullptr) {

    }
    else
    {
        TIPO *aux= pointer->pointerNext();
        destructor(aux);
        delete pointer;

    }
}

template<class TIPO>
Stack<TIPO>::~Stack()
{
  destructor(Top);

}


template<class TIPO>
TIPO Stack<TIPO>::top()
{
   return Top->value();
}

template<class TIPO>
void Stack<TIPO>::push(TIPO item)
{
    Element<TIPO> *aux=new Element<TIPO>(item, Top);

  length++;
  Top=aux;
}


template<class TIPO>
TIPO Stack<TIPO>::pop()
{
  length--;
  Element<TIPO> *aux=Top;
  TIPO aux2=aux->value();
  Top= aux->pointerNext();
  delete aux;
  return aux2;
}

template<class TIPO> 
int Stack<TIPO>::len()
{
  return length;
}




