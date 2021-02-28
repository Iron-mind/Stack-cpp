
# Stack-cpp
Stack in c++ template c++. see main.cpp
### Recomendations
>never use 'Element' class.

## how to use
- Stack.tpp, Stack.h, Element.tpp Element.h are everything. Never separate, all in the same folder with _main.cpp_ (file where are you going to work)

- You Only have to import Stack.h like
> ##### #include "Stack.h"

## How to declare

     Stack<typedate> nameWhatever; 


## Methods
 ### top

    stackname.top();
    return top of stack
   
### push
    stackname.push(type item);
    push item in stack
### pop
    stackname.pop();
    remuves first element in stack and returns it
### len
    stackname.len();
    return int, length stack

