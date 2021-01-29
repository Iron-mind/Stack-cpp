/*
  Archivo: Stack.tpp
  Autor: David T. Montoya
  <davidtovarmontoya@gmail.com>
  start date: 2020-11-20
  Fecha ultima modificacion: 2020-11-20
  Version: 0.1
  Licencia: GPL
*/
//PENDIENTES
// también un operator suma & que todo esté en ingles
// operator igual = para asignar pilas
//documentar las funciones
//operador paque se pueda imprimir la pila
//arreglar documentacion
//referencia con el .top ejem stack.top=20
//cambiar el valor del top con operador por referencia
//operator ++ une las dos pero se sigue teniendo acceso a la otra por puntero
//funcion .last retorna el last
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
Stack<TIPO>::~Stack() {
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
    if (Top==nullptr)
    {
        last=aux;
    }
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


template<class TIPO>
Stack<TIPO> concatenator(const Stack<TIPO> stackU)
{


}
template<class TIPO>
void Stack<TIPO>:: operator + (const Stack<TIPO> stackConcat)
{
    Stack<TIPO> stackAux;
    if (Top == nullptr) {

    }
    else
    {

        TIPO *aux= pointer->pointerNext();
        destructor(aux);
        delete pointer;

    }
}

