/////////////////////////////////////////////////////////////////
// Final Code of Stack using Generic Approach
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

#pragma pack(1)
template<class T>
class Queuenode 
{
    public:
        T data;
        Queuenode<T> * next;

        Queuenode<T>(T no)
        {
            this->data=no;
            this->next=NULL;
            this->last = NULL;
        }
};

template<class T>
class Queue
{
    private:
        Queuenode<T> * first;
        Queuenode<T> * last;
        int iCount;

    public:
        Queue();
        void Enqueue(T);
        T Dequque();
        void Display();
        int Count();
};

template<class T>
Queue<T>::Queue()
{
    cout<<"Queue gets created Successfully ...\n";
    this->first=NULL;
    this->iCount=0;
}
template<class T>
void Queue<T>::Enqueue(T no)
{
    Queuenode<T> *newn=NULL;
    newn=new Queuenode<T>(no);
    if(this->first==NULL && this->last==NULL)
    {
        this->first=newn;

    }
    else
    {
        last->next=newn;

    }

    this->last=newn; // this->last = this->last->newn;


    this->iCount++;
}
template<class T>
T Queue<T>::Dequque()
{
    T Value=0;
    Queuenode<T> * temp=this->first;
    if(this->first==NULL)
    {
        cout<<"Queue is empty "<<"\n";
        return -1;
    }
    Value = this->first->data;
    this->first=this->first->next;
    delete temp;

    this->iCount--;
    return Value;

}

template<class T>
void Queue<T>::Display()
{
     Queuenode *temp=this->first;
     if(this->first==NULL && this->last==NULL)
     {
        cout<<"Queue is Empty \n";
        return;
     }
     while(temp!=NULL)
     {
        cout << "| " <<temp->data<<" |~";
        temp=temp->next; 
     }
     cout<<"\n";
}

template<class T>
int Queue<T>::Count()
{
    return this->iCount;
}

int main()
{
    Queue<int>* qobj = new Queue<int>();
    qobj->Enqueue(11);
    qobj->Enqueue(21);
    qobj->Enqueue(51);
    qobj->Enqueue(101);
    qobj->Display();
    cout<<"No of elememts :"<<qobj->Count()<<"\n";
    
    qobj->Display();
    cout<<"No of elememts :"<<qobj->Count()<<"\n";
    cout<<"POPPED ELEMENT IS :"<<qobj->Dequque()<<"\n";
    qobj->Display();
    cout<<"No of elememts :"<<qobj->Count()<<"\n";
    cout<<"POPPED ELEMENT IS :"<<qobj->Dequque()<<"\n";
    qobj->Display();
    cout<<"No of elememts :"<<qobj->Count()<<"\n";

    qobj->Enqueue(121);
    qobj->Display();
    cout<<"No of elememts :"<<qobj->Count()<<"\n";
    delete qobj;
    return 0;
}

