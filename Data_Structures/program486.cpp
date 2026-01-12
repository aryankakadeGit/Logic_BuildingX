/////////////////////////////////////////////////////////////////
// Final Code of Singly Linear LinkedList using Generic Approach
/////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

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

int main()
{
    SinglyLLL<int> obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.Display();

    obj.InsertAtPos(126, 4);
    obj.Display();

    obj.DeleteFirst();
    obj.Display();

    obj.DeleteLast();
    obj.Display();

    obj.DeleteAtPos(3);
    obj.Display();

    return 0;
}
