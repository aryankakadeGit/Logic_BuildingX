#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

struct node
{
    int data;
    struct node *next;
};

void insertLast(PPNODE first,int no)
{
    PNODE newn =NULL;
    PNODE temp=NULL;//traverse till last 
        
    newn =(PNODE)malloc(sizeof(NODE));
    newn ->data=no;
    newn ->next=NULL;
    if(*first ==NULL)
    {
        *first =newn;
    }
    else
    {
        temp=*first;
        while( temp->next!=NULL) //type 2
        {
            temp=temp->next;
        }   
        temp->next=newn;
    }
}

void DisplayI(PNODE first)
{
    while(first!=NULL)//type 1
    {
        printf("| %d | -> ",first->data);
        first=first->next;
    }
    printf("NULL\n");
}

void DisplayR(PNODE first)
{
    if(first!=NULL)//type 1
    {
        DisplayR(first->next);        
        printf("| %d | -> ",first->data);
    }
    
}
int Count(PNODE first)
{
    int iCount=0;
    if(first!=NULL)
    {
        iCount++;
        first=first->next;
        Count(first);
    }
    return iCount;
}

int main()
{
    PNODE head=NULL;
    insertLast(&head,11);
    insertLast(&head,21);
    insertLast(&head,51);
    insertLast(&head,101);
    DisplayR(head);
    printf("\n");
    return 0;
}