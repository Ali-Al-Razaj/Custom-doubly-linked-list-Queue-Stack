#pragma once


#include "clsMyQueue.h"

template <class T>
class clsMyStack : public clsMyQueue<T>
{
public:

    void Push(T Item)
    {
        clsMyQueue<T>::_Queue.InsertAtBeginning(Item);
    }
    T Top()
    {
        return clsMyQueue<T>::Front();
    }
    T Bottom()
    {
        return clsMyQueue<T>::Back();
    }

};


