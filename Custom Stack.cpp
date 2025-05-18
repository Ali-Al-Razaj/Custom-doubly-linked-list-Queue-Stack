// Custom Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsMyStack.h";

int main()
{
    clsMyStack<int> Stack;

    Stack.Push(1);
    Stack.Push(2);
    Stack.Push(3);
    Stack.Push(4);

    Stack.Print();

    Stack.Pop();
    Stack.Print();
}


