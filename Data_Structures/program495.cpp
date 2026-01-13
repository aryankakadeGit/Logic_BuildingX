///////////////////////////////////////////
// Generalized DATA STRUCTURE LIBRARY
///////////////////////////////////////////
/*
__________________________________________________________________________________
Type            |  Name of class for node    |     Name of class for functionality
----------------------------------------------------------------------------------
Singly Linear   |   SinglyLLLnode            |             SinglyLLL    
Singly Circular |   SinglyCLLnode            |             SinglyCLL
Doubly Linear   |   DoublyLLLnode            |             DoublyLLL    
Doubly Circular |   DoublyCLLnode            |             DoublyCLL
Stack           |   Stacknode                |             Stack
Queue           |   Queuenode                |             Queue


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

/////////////////////////////////////////////////////////////////
//
//  FunctionName : SinglyLLL (Constructor)
//  INPUT :        None
//  OUTPUT :       None
//  Description :  Initializes an empty Singly Linear Linked List
//                 by setting first pointer to NULL and
//                 node count to zero.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
SinglyLLL<T>::SinglyLLL()
{
    first = NULL;
    iCount = 0;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : InsertFirst
//  INPUT :        Data of node
//  OUTPUT :       None
//  Description :  Inserts a new node at the beginning of the
//                 Singly Linear Linked List.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void SinglyLLL<T>::InsertFirst(T no)
{
    SinglyLLLnode<T> *newn = new SinglyLLLnode<T>(no);

    newn->next = first;
    first = newn;
    iCount++;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : InsertLast
//  INPUT :        Data of node
//  OUTPUT :       None
//  Description :  Inserts a new node at the end of the
//                 Singly Linear Linked List.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////
//
//  FunctionName : DeleteFirst
//  INPUT :        None
//  OUTPUT :       None
//  Description :  Deletes the first node from the Singly
//                 Linear Linked List.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////
//
//  FunctionName : DeleteLast
//  INPUT :        None
//  OUTPUT :       None
//  Description :  Deletes the last node from the Singly
//                 Linear Linked List.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////
//
//  FunctionName : Display
//  INPUT :        None
//  OUTPUT :       Displays all elements
//  Description :  Traverses the Singly Linear Linked List
//                 and prints each node's data.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////
//
//  FunctionName : Count
//  INPUT :        None
//  OUTPUT :       Returns number of nodes
//  Description :  Returns the total count of nodes present
//                 in the Singly Linear Linked List.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
int SinglyLLL<T>::Count()
{
    return iCount;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : InsertAtPos
//  INPUT :        Data of node, Position
//  OUTPUT :       None
//  Description :  Inserts a new node at the specified position
//                 in the Singly Linear Linked List.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
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

/////////////////////////////////////////////////////////////////
//
//  FunctionName : DeleteAtPos
//  INPUT :        Position
//  OUTPUT :       None
//  Description :  Deletes the node at the specified position
//                 from the Singly Linear Linked List.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
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
//      Singly Circular LinkedList using Generic Approach
//
/////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

#pragma pack(1)

template <class T>
class SinglyCLLnode
{
public:
    T data;
    SinglyCLLnode<T> *next;

    SinglyCLLnode(T no)
    {
        data = no;
        next = NULL;
    }
};

template <class T>
class SinglyCLL
{
private:
    SinglyCLLnode<T> *first;
    SinglyCLLnode<T> *last;
    int iCount;

public:
    SinglyCLL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void DeleteFirst();
    void DeleteLast();
    void Display();
    int Count();
    void InsertAtPos(T no, int pos);
    void DeleteAtPos(int pos);
};

/////////////////////////////////////////////////////////////////
//
//  FunctionName : SinglyCLL (Constructor)
//  INPUT :        None
//  OUTPUT :       None
//  Description :  Initializes an empty Singly Circular Linked List
//                 by setting first and last pointers to NULL
//                 and count to zero.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
SinglyCLL<T>::SinglyCLL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : InsertFirst
//  INPUT :        Data of node
//  OUTPUT :       None
//  Description :  Inserts a new node at the beginning of the
//                 Singly Circular Linked List and maintains
//                 circular linking between last and first.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void SinglyCLL<T>::InsertFirst(T no)
{
    SinglyCLLnode<T> *newn = new SinglyCLLnode<T>(no);

    if (first == NULL)
    {
        first = last = newn;
        last->next = first;
    }
    else
    {
        newn->next = first;
        first = newn;
        last->next = first;
    }
    iCount++;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : InsertLast
//  INPUT :        Data of node
//  OUTPUT :       None
//  Description :  Inserts a new node at the end of the
//                 Singly Circular Linked List and updates
//                 the circular link accordingly.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void SinglyCLL<T>::InsertLast(T no)
{
    SinglyCLLnode<T> *newn = new SinglyCLLnode<T>(no);

    if (first == NULL)
    {
        first = last = newn;
        last->next = first;
    }
    else
    {
        last->next = newn;
        last = newn;
        last->next = first;
    }
    iCount++;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : DeleteFirst
//  INPUT :        None
//  OUTPUT :       None
//  Description :  Deletes the first node from the Singly
//                 Circular Linked List and updates the
//                 first and last pointers properly.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void SinglyCLL<T>::DeleteFirst()
{
    if (first == NULL)
    {
        return;
    }
    else if (first == last)
    {
        delete first;
        first = last = NULL;
    }
    else
    {
        SinglyCLLnode<T> *temp = first;
        first = first->next;
        delete temp;
        last->next = first;
    }
    iCount--;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : DeleteLast
//  INPUT :        None
//  OUTPUT :       None
//  Description :  Deletes the last node from the Singly
//                 Circular Linked List and maintains the
//                 circular structure of the list.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void SinglyCLL<T>::DeleteLast()
{
    if (first == NULL)
    {
        return;
    }
    else if (first == last)
    {
        delete first;
        first = last = NULL;
    }
    else
    {
        SinglyCLLnode<T> *temp = first;

        while (temp->next != last)
        {
            temp = temp->next;
        }

        delete last;
        last = temp;
        last->next = first;
    }
    iCount--;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : Display
//  INPUT :        None
//  OUTPUT :       Displays all elements
//  Description :  Traverses the Singly Circular Linked List
//                 starting from the first node and prints
//                 each element until it reaches first again.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void SinglyCLL<T>::Display()
{
    if (first == NULL)
    {
        return;
    }

    SinglyCLLnode<T> *temp = first;

    do
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    } while (temp != first);

    cout << "(First)\n";
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : Count
//  INPUT :        None
//  OUTPUT :       Returns number of nodes
//  Description :  Returns the total count of nodes present
//                 in the Singly Circular Linked List.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
int SinglyCLL<T>::Count()
{
    return iCount;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : InsertAtPos
//  INPUT :        Data of node, Position
//  OUTPUT :       None
//  Description :  Inserts a node at the specified position
//                 in the Singly Circular Linked List.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void SinglyCLL<T>::InsertAtPos(T no, int pos)
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
        SinglyCLLnode<T> *newn = new SinglyCLLnode<T>(no);
        SinglyCLLnode<T> *temp = first;

        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : DeleteAtPos
//  INPUT :        Position
//  OUTPUT :       None
//  Description :  Deletes the node at the specified position
//                 from the Singly Circular Linked List.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void SinglyCLL<T>::DeleteAtPos(int pos)
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
        SinglyCLLnode<T> *temp = first;

        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        SinglyCLLnode<T> *target = temp->next;
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


/////////////////////////////////////////////////////////////////
//
//      Doubly Circular LinkedList using Generic Approach
//
/////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

#pragma pack(1)

template <class T>
class DoublyCLLnode
{
public:
    T data;
    DoublyCLLnode<T> *next;
    DoublyCLLnode<T> *prev;

    DoublyCLLnode(T no)
    {
        data = no;
        next = NULL;
        prev = NULL;
    }
};

template <class T>
class DoublyCLL
{
private:
    DoublyCLLnode<T> *first;
    DoublyCLLnode<T> *last;
    int iCount;

public:
    DoublyCLL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void DeleteFirst();
    void DeleteLast();
    void Display();
    int Count();
    void InsertAtPos(T no, int pos);
    void DeleteAtPos(int pos);
};

/////////////////////////////////////////////////////////////////
//
//  FunctionName : DoublyCLL (Constructor)
//  INPUT :        None
//  OUTPUT :       None
//  Description :  Initializes an empty Doubly Circular Linked List
//                 by setting first and last pointers to NULL
//                 and count to zero.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
DoublyCLL<T>::DoublyCLL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : InsertFirst
//  INPUT :        Data of node
//  OUTPUT :       None
//  Description :  Inserts a new node at the beginning of the
//                 Doubly Circular Linked List and maintains
//                 circular links in both directions.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void DoublyCLL<T>::InsertFirst(T no)
{
    DoublyCLLnode<T> *newn = new DoublyCLLnode<T>(no);

    if (first == NULL)
    {
        first = last = newn;
        first->next = first;
        first->prev = first;
    }
    else
    {
        newn->next = first;
        newn->prev = last;
        first->prev = newn;
        last->next = newn;
        first = newn;
    }
    iCount++;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : InsertLast
//  INPUT :        Data of node
//  OUTPUT :       None
//  Description :  Inserts a new node at the end of the
//                 Doubly Circular Linked List and updates
//                 circular links accordingly.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void DoublyCLL<T>::InsertLast(T no)
{
    DoublyCLLnode<T> *newn = new DoublyCLLnode<T>(no);

    if (first == NULL)
    {
        first = last = newn;
        first->next = first;
        first->prev = first;
    }
    else
    {
        newn->prev = last;
        newn->next = first;
        last->next = newn;
        first->prev = newn;
        last = newn;
    }
    iCount++;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : DeleteFirst
//  INPUT :        None
//  OUTPUT :       None
//  Description :  Deletes the first node from the Doubly
//                 Circular Linked List and updates both
//                 next and previous links properly.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void DoublyCLL<T>::DeleteFirst()
{
    if (first == NULL)
    {
        return;
    }
    else if (first == last)
    {
        delete first;
        first = last = NULL;
    }
    else
    {
        DoublyCLLnode<T> *temp = first;
        first = first->next;
        first->prev = last;
        last->next = first;
        delete temp;
    }
    iCount--;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : DeleteLast
//  INPUT :        None
//  OUTPUT :       None
//  Description :  Deletes the last node from the Doubly
//                 Circular Linked List while maintaining
//                 circular links.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void DoublyCLL<T>::DeleteLast()
{
    if (first == NULL)
    {
        return;
    }
    else if (first == last)
    {
        delete first;
        first = last = NULL;
    }
    else
    {
        DoublyCLLnode<T> *temp = last;
        last = last->prev;
        last->next = first;
        first->prev = last;
        delete temp;
    }
    iCount--;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : Display
//  INPUT :        None
//  OUTPUT :       Displays all elements
//  Description :  Traverses the Doubly Circular Linked List
//                 in forward direction and prints each node.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void DoublyCLL<T>::Display()
{
    if (first == NULL)
    {
        return;
    }

    DoublyCLLnode<T> *temp = first;

    do
    {
        cout << "|" << temp->data << "|<=>";
        temp = temp->next;
    } while (temp != first);

    cout << "(First)\n";
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : Count
//  INPUT :        None
//  OUTPUT :       Returns number of nodes
//  Description :  Returns the total number of nodes present
//                 in the Doubly Circular Linked List.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
int DoublyCLL<T>::Count()
{
    return iCount;
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : InsertAtPos
//  INPUT :        Data of node, Position
//  OUTPUT :       None
//  Description :  Inserts a node at the specified position
//                 in the Doubly Circular Linked List.
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void DoublyCLL<T>::InsertAtPos(T no, int pos)
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
        DoublyCLLnode<T> *newn = new DoublyCLLnode<T>(no);
        DoublyCLLnode<T> *temp = first;

        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;
        temp->next->prev = newn;
        temp->next = newn;
        iCount++;
    }
}

/////////////////////////////////////////////////////////////////
//
//  FunctionName : DeleteAtPos
//  INPUT :        Position
//  OUTPUT :       None
//  Description :  Deletes the node at the specified position
//  Author :       Aryan Hanumant Kakade
//  Date :         06/01/2025
//
/////////////////////////////////////////////////////////////////
template <class T>
void DoublyCLL<T>::DeleteAtPos(int pos)
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
        DoublyCLLnode<T> *temp = first;

        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        DoublyCLLnode<T> *target = temp->next;
        temp->next = target->next;
        target->next->prev = temp;
        delete target;
        iCount--;
    }
}


/////////////////////////////////////////////////////////////////
//
//      Stack using Generic Approach
//
/////////////////////////////////////////////////////////////////
template<class T>
class Stacknode 
{
    public:
        T data;
        Stacknode <T>* next;

        Stacknode(T no)
        {
            this->data=no;
            this->next=NULL;
        }
};
template<class T>
class Stack
{
    private:
        Stacknode<T> * first;
        int iCount;

    public:
        Stack();
        void push(T);
        T pop();
        T peep();
        void Display();
        int Count();
};

template<class T>
Stack<T>::Stack()
{
    cout<<"Stack gets created Successfully ...\n";
    this->first=NULL;
    this->iCount=0;
}
template<class T>
void Stack<T>::push(T no)
{
    Stacknode<T> *newn=NULL;
    newn=new Stacknode<T>(no);
    newn->next=this->first;
    this->first=newn;
    iCount++;
}
template<class T>
T Stack<T>::pop()
{
    T Value=0;
    Stacknode<T> * temp=this->first;
    if(this->first==NULL)
    {
        cout<<"Stack is empty "<<"\n";
        return -1;
    }
    Value = this->first->data;
    this->first=this->first->next;
    delete temp;

    this->iCount--;
    return Value;

}
template<class T>
T Stack<T>::peep()
{
    T Value=0;
    if(this->first==NULL)
    {
        cout<<"Stack is empty "<<"\n";
        return -1;
    }
    Value = this->first->data;

    return Value;
}
template<class T>
void Stack<T>::Display()
{ 
     Stacknode<T> *temp=this->first;
     if(this->first==NULL)
     {
        cout<<"Stack is Empty \n";
        return;
     }
     while(temp!=NULL)
     {
        cout << "|\t" <<temp->data<<"\t|\n";
        temp=temp->next; 
     }
}
template<class T>
int Stack<T>::Count()
{
    return this->iCount;
}



/////////////////////////// End OF Library ///////////////////////
int main()
{
    DoublyLLL <int>*dobj = new DoublyLLL<int>();
    dobj->InsertFirst(51);
    dobj->InsertFirst(21);
    dobj->InsertFirst(11);
    dobj->Display();
    cout << "NUMBER of elements are : " << dobj->Count();

    dobj->InsertLast(101);
    dobj->InsertLast(111);
    dobj->InsertLast(121);
    dobj->Display();
    cout << "NUMBER of elements are : " << dobj->Count();

    dobj->DeleteFirst();
    dobj->Display();
    cout << "NUMBER of elements are : " << dobj->Count();

    dobj->DeleteLast();
    dobj->Display();
    cout << "NUMBER of elements are : " << dobj->Count();

    dobj->InsertAtPos(55,3);
    dobj->Display();
    cout << "NUMBER of elements are : " << dobj->Count();

    dobj->DeleteAtPos(3);
    dobj->Display();
    cout << "NUMBER of elements are : " << dobj->Count();

    delete dobj;

    /////////////////////////////////////////////////////////
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

    ///////////////////////////////////////////////////////////
    Stack<char>* sobj = new Stack<char>();
    sobj->push('a');
    sobj->push('b');
    sobj->push('c');
    sobj->push('d');
    sobj->Display();
    cout<<"No of elememts :"<<sobj->Count()<<"\n";
    cout<<"Return Value of peep "<<sobj->peep()<<"\n";
    sobj->Display();
    cout<<"No of elememts :"<<sobj->Count()<<"\n";
    cout<<"POPPED ELEMENT IS :"<<sobj->pop()<<"\n";
    sobj->Display();
    cout<<"No of elememts :"<<sobj->Count()<<"\n";
    cout<<"POPPED ELEMENT IS :"<<sobj->pop()<<"\n";
    sobj->Display();
    cout<<"No of elememts :"<<sobj->Count()<<"\n";

    sobj->push('e');
    sobj->Display();
    cout<<"No of elememts :"<<sobj->Count()<<"\n";
    delete sobj;

    /////////////////////////////////////////////////////////////
    return 0;
}
