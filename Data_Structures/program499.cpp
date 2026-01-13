/////////////////////////////////////////////////////////////////
// Final Code of Queue using Generic Approach
/////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)

template<class T>
class Queuenode
{
public:
    T data;
    Queuenode<T>* next;

    Queuenode(T no)
    {
        data = no;
        next = NULL;
    }
};

template<class T>
class Queue
{
private:
    Queuenode<T>* first;
    Queuenode<T>* last;
    int iCount;

public:
    Queue();
    void Enqueue(T);
    T Dequeue();
    void Display();
    int Count();
};

template<class T>
Queue<T>::Queue()
{
    cout << "Queue gets created Successfully...\n";
    first = NULL;
    last = NULL;
    iCount = 0;
}

template<class T>
void Queue<T>::Enqueue(T no)
{
    Queuenode<T>* newn = new Queuenode<T>(no);

    if (first == NULL)
    {
        first = last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }
    iCount++;
}

template<class T>
T Queue<T>::Dequeue()
{
    if (first == NULL)
    {
        cout << "Queue is empty\n";
        return T();
    }

    T value = first->data;
    Queuenode<T>* temp = first;
    first = first->next;
    delete temp;

    if (first == NULL)
    {
        last = NULL;
    }

    iCount--;
    return value;
}

template<class T>
void Queue<T>::Display()
{
    if (first == NULL)
    {
        cout << "Queue is Empty\n";
        return;
    }

    Queuenode<T>* temp = first;
    while (temp != NULL)
    {
        cout << "| " << temp->data << " |~";
        temp = temp->next;
    }
    cout << "\n";
}

template<class T>
int Queue<T>::Count()
{
    return iCount;
}

int main()
{
    Queue<int>* qobj = new Queue<int>();

    qobj->Enqueue(11);
    qobj->Enqueue(21);
    qobj->Enqueue(51);
    qobj->Enqueue(101);

    qobj->Display();
    cout << "No of elements: " << qobj->Count() << "\n";

    cout << "POPPED ELEMENT IS: " << qobj->Dequeue() << "\n";
    cout << "POPPED ELEMENT IS: " << qobj->Dequeue() << "\n";

    qobj->Display();
    cout << "No of elements: " << qobj->Count() << "\n";

    delete qobj;
    return 0;
}
