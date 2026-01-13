#include<iostream>
using namespace std;

#pragma pack(1)
class Queuenode 
{
    public:
        int data;
        Queuenode * next;

        Queuenode(int no)
        {
            this->data=no;
            this->next=NULL;
        }
};

class Queue
{
    private:
        Queuenode * first;
        int iCount;

    public:
        Queue();
        void Enqueue(int);
        int Dequque();
        void Display();
        int Count();
};

Queue::Queue()
{
    cout<<"Queue gets created Successfully ...\n";
    this->first=NULL;
    this->iCount=0;
}
void Queue::Enqueue(int no)
{
    Queuenode *newn=NULL;
    Queuenode *temp=this->first;
    newn=new Queuenode(no);
    if(this->first==NULL)
    {
        this->first=newn;
    }
    else
    {
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newn;
    }
    this->iCount++;
}
int Queue::Dequque()
{
    int Value=0;
    Queuenode * temp=this->first;
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

void Queue::Display()
{
     Queuenode *temp=this->first;
     if(this->first==NULL)
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
int Queue::Count()
{
    return this->iCount;
}
int main()
{
    Queue* qobj = new Queue();
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

