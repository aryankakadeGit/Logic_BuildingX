///////////////////////////////////////////
// Generalized DATA STRUCTURE LIBRARY
///////////////////////////////////////////
/*
__________________________________________________________________________________
Type of LL      |  Name of class for node    |     Name of class for functionality
----------------------------------------------------------------------------------
Singly Linear   |   SinglyLLLnode            |             SinglyLLL
Singly Circular |  SinglyCLLnode             |             SinglyCLL
Doubly Linear   |  DoublyLLLnode             |             DoublyLLL
Doubly Circular |  DoublyCLLnode             |             DoublyCLL

*/



#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
//
//      Singly Linear LinkedList using Generic Approach
//
/////////////////////////////////////////////////////////////////

#pragma pack(1)
template <class T>
class SinglyLLLnode
{
public:
    T data;
    SinglyLLLnode<T> *next;

    SinglyLLLnode(T no)
    {
        data = no;
        next = NULL;
    }
};

template <class T>
class SinglyLLL
{
private:
    SinglyLLLnode<T> *first;
    int iCount;

public:
    SinglyLLL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void DeleteFirst();
    void DeleteLast();
    void Display();
    int Count();
    void InsertAtPos(T no, int pos);
    void DeleteAtPos(int pos);
};

template <class T>
SinglyLLL<T>::SinglyLLL()
{
    first = NULL;
    iCount = 0;
}

template <class T>
void SinglyLLL<T>::InsertFirst(T no)
{
    SinglyLLLnode<T> *newn = new SinglyLLLnode<T>(no);
    newn->next = first;
    first = newn;
    iCount++;
}

template <class T>
void SinglyLLL<T>::InsertLast(T no)
{
    SinglyLLLnode<T> *newn = new SinglyLLLnode<T>(no);

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        SinglyLLLnode<T> *temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLLL<T>::DeleteFirst()
{
    if (first == NULL)
    {
        return;
    }

    SinglyLLLnode<T> *temp = first;
    first = first->next;
    delete temp;
    iCount--;
}

template <class T>
void SinglyLLL<T>::DeleteLast()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        SinglyLLLnode<T> *temp = first;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLLL<T>::Display()
{
    SinglyLLLnode<T> *temp = first;

    while (temp != NULL)
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

template <class T>
int SinglyLLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLLL<T>::InsertAtPos(T no, int pos)
{
    if (pos < 1 || pos > iCount + 1)
    {
        return;
    }

    if (pos == 1)
    {
        InsertFirst(no);
    }
    else if (pos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        SinglyLLLnode<T> *newn = new SinglyLLLnode<T>(no);
        SinglyLLLnode<T> *temp = first;

        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

template <class T>
void SinglyLLL<T>::DeleteAtPos(int pos)
{
    if (pos < 1 || pos > iCount)
    {
        return;
    }

    if (pos == 1)
    {
        DeleteFirst();
    }
    else if (pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        SinglyLLLnode<T> *temp = first;

        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        SinglyLLLnode<T> *target = temp->next;
        temp->next = target->next;
        delete target;
        iCount--;
    }
}



/////////////////////////////////////////////////////////////////
//
//      Doubly Linear LinkedList using Generic Approach
//
/////////////////////////////////////////////////////////////////

#pragma pack(1)
template<class T>
class DoublyLLLnode
{
public:
    T data;
    DoublyLLLnode *next;
    DoublyLLLnode *prev;

    DoublyLLLnode(T no)
    {
        data = no;
        next = NULL;
        prev = NULL;
    }
};

template<class T>
class DoublyLLL
{
public:
    DoublyLLLnode<T> *first;
    int iCount;

    DoublyLLL();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

template<class T>
DoublyLLL<T>::DoublyLLL()
{
    first = NULL;
    iCount = 0;
}

template<class T>
void DoublyLLL<T>::InsertFirst(T no)
{
    DoublyLLLnode<T> *newn = new DoublyLLLnode<T>(no);

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    iCount++;
}

template<class T>
void DoublyLLL<T>::InsertLast(T no)
{
    DoublyLLLnode<T> *newn = new DoublyLLLnode<T>(no);

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        DoublyLLLnode<T> *temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

template<class T>
void DoublyLLL<T>::InsertAtPos(T no, int pos)
{
    if (pos < 1 || pos > iCount + 1)
    {
        return;
    }

    if (pos == 1)
    {
        InsertFirst(no);
    }
    else if (pos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        DoublyLLLnode<T> *newn = new DoublyLLLnode<T>(no);
        DoublyLLLnode<T> *temp = first;

        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        iCount++;
    }
}

template<class T>
void DoublyLLL<T>::DeleteFirst()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        DoublyLLLnode<T> *temp = first;
        first = first->next;
        first->prev = NULL;
        delete temp;
    }
    iCount--;
}

template<class T>
void DoublyLLL<T>::DeleteLast()
{
    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        DoublyLLLnode<T> *temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        delete temp;
    }
    iCount--;
}

template<class T>
void DoublyLLL<T>::DeleteAtPos(int pos)
{
    if (pos < 1 || pos > iCount)
    {
        return;
    }

    if (pos == 1)
    {
        DeleteFirst();
    }
    else if (pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        DoublyLLLnode<T> *temp = first;

        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
        iCount--;
    }
}

template<class T>
void DoublyLLL<T>::Display()
{
    DoublyLLLnode<T> *temp = first;
    cout << "NULL<=>";
    while (temp != NULL)
    {
        cout << "|" << temp->data << "|<=>";
        temp = temp->next;
    }
    cout << "NULL\n";
}

template<class T>
int DoublyLLL<T>::Count()
{
    return iCount;
}


/////////////////////////// End OF Library ///////////////////////
int main()
{

    return 0;
}
