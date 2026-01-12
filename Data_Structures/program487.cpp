/////////////////////////////////////////////////////////////////
// Final Code of Doubly Linear LinkedList using Generic Approach
/////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

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

int main()
{
    DoublyLLL<char> *dobj = new DoublyLLL<char>();

    dobj->InsertFirst('c');
    dobj->InsertFirst('b');
    dobj->InsertFirst('a');
    dobj->Display();

    dobj->InsertLast('d');
    dobj->InsertLast('e');
    dobj->InsertLast('f');
    dobj->Display();

    dobj->DeleteFirst();
    dobj->Display();

    dobj->DeleteLast();
    dobj->Display();

    dobj->InsertAtPos('$', 4);
    dobj->Display();

    dobj->DeleteAtPos(3);
    dobj->Display();

    delete dobj;
    return 0;
}
