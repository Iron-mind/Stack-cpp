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
void testmethod(Element<double>elem, string name)
{
    cout<< " \e[1;107;30mRunning function .valueNext of element \e[0m"+name<<endl<<"Result: "<< elem.valueNext() <<endl<<endl;
    cout<< " \e[1;107;30mRunning function .value of element \e[0m"+name<<endl<<"Result: "<< elem.value() <<endl<<endl;
    cout<< " \e[1;107;30mRunning function .pointerNext of element \e[0m"+ name<<endl<<"Result: "<<elem.pointerNext() <<endl<<endl;

}
void testmethodI(Element<int>elem, string name)
{
    cout<< " \e[1;107;30mRunning function .valueNext of element \e[0m"+name<<endl<<"Result: "<< elem.valueNext() <<endl<<endl;
    cout<< " \e[1;107;30mRunning function .value of element \e[0m"+name<<endl<<"Result: "<< elem.value() <<endl<<endl;
    cout<< " \e[1;107;30mRunning function .pointerNext of element \e[0m"+ name<<endl<<"Result: "<<elem.pointerNext() <<endl<<endl;

}
void testmethodS(Element<string>elem, string name)
{
    cout<< " \e[1;107;30mRunning function .valueNext of element \e[0m"+name<<endl<<"Result: "<< elem.valueNext() <<endl<<endl;
    cout<< " \e[1;107;30mRunning function .value of element \e[0m"+name<<endl<<"Result: "<< elem.value() <<endl<<endl;
    cout<< " \e[1;107;30mRunning function .pointerNext of element \e[0m"+ name<<endl<<"Result: "<<elem.pointerNext() <<endl<<endl;

}
int main()
{
    try
    {
        //remember that 'Element' class is very importan for linklist or stack (check Element.h and Element.tpp)
        //testing element template
        //int elements
        Element<int> one(1, nullptr);
        Element<int> two(2, &one);
        Element<int> tre(3, &two);
        Element<int> four(4, &tre);
        Element<int> five(5, &four);
        Element<int> sex(6, &five);
//test operator
        tre= 30; //this should print
        two=20;

        //double elements
        Element<double> treeDec(3.44, nullptr );
        Element<double> fourDec(4.55, &treeDec );
        Element<double> feveDec(5.55, &treeDec );
        Element<double> sixDec(6.55, &treeDec );
        Element<double> nineDec(9, &treeDec );
        //test operator
        fourDec= 4.44; //this should print
        nineDec=8.9;

//string elements
        Element<string> hello("Hi,", nullptr );
        Element<string> world("world", &hello );
        Element<string> world1("world1", &world );
        Element<string> world2("world2", &world1 );
        Element<string> world3("world3", &world2 );
        Element<string> world4("world5", &world3 );
        Element<string> world5("world4", &world4 );
        world4="worldcrazy4"; //this should print
        world5="worldcrazy5";


//TEST OF METHOD ELEMENT //////////////////////////////////////////
        testmethod(nineDec,"'nineDec'");
        testmethod(fourDec,"'fourDec'");
        testmethodI(four,"'four'");
        testmethodI(five,"'five'");
        testmethodS(world4,"'world4'");
        testmethodS(world3,"'world3'");
        //int jkjkj= one.valueNext(); report error
        //int jkjkj= one.pointerNext()->value(); // never do this
        //



        //
// TEST METHOD OF STACK ////////////////////////////////////////

        Stack<int> pila;
        Stack<int> pila2;
        //Stack<int> pila3=pila+pila2;



        cout<< "test "<<"lenght de la pila: "<<  pila.len()<<endl;

        Stack<string> cadenas;
        cadenas.push("entonces");
        cadenas.push("qué pasó");
        cadenas.push("con el ");
        cadenas.push("programador x");
        cout<<"Pila hecha en c++, esta es lo grande de la pila: "<<cadenas.len()<<endl;

        cadenas.pop();

        cout<<"Este es el top de la pila:  "<<"'"+cadenas.top()+"'"<<endl;
//        //no olvidar: valgrind --tool=memcheck --leak-check=full ./main
//        //para los memoryleaks
    }
    catch (string alert)
    {
        cout<<"\e[100;107;30mERROR\e[0m"<<alert<< endl;
    }



    //comandos para compilar
    // $ g++ main.cpp -o Pila
    // $ ./Pila
    return 0;
}
