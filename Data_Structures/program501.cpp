/////////////////////////////////////////////////////////////////
// Final Code of Queue using Generic Approach with Menu
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

    int iChoice =0;
    int Value=0;
    int iRet=0;
    while(1)
    {
        cout<<"_______________________________________________________________\n";
        cout<<"__________________Please select the option :___________________\n";
        cout<<"1 : Insert new Element in  the Queue \n";
        cout<<"2 : Remove the Element from  the Queue \n";
        cout<<"3 : Display Elements from the Queue \n";
        cout<<"4 : Count no of Elements in  the Queue \n";
        cout<<"0 : Exit Application \n";
        cin>>iChoice;
        
        cout<<"_______________________________________________________________\n";

        switch(iChoice)
        {
            case 0 : 
                cout<<"Thank you for using our application \n";
                delete qobj;
                return 0;
            case 1 : 
                cout<<"Enter element that you want to insert \n";
                cin>>Value;
                qobj->Enqueue(Value);
                cout<<"Element gets inserted successfully \n";
                break;
            case 2 :
                iRet=qobj->Dequeue();
                if(iRet!=-1)
                {
                    cout<<"Element removed from queue is "<<iRet<<"\n";
                }
                break;

            case 3 : 
                cout<<"Elements of queue are : ";
                qobj->Display();
                break;
            case 4 : 
                iRet=qobj->Count();

                cout<<"Elements of queue are : "<<iRet<<"\n";
                break;
            
            default :
                cout<<"Enter valid option\n";
        } //End of switch
        
        
    }//End of While
    return 0;//End of main
}
