#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void insertFirst(PPNODE first,int no)
{
    PNODE newn =NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    if(*first==NULL)//LL empty
    {
        (*first)=newn;
    }
    else            //LL Atleast 1 node
    {
        newn->next=*first;
        (*first)=newn;
    }
}
void insertLast(PPNODE first,int no)
{
    PNODE newn =NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*first!=NULL)//LL empty
    {
        *first=newn;
    }
    else            //LL Atleast 1 node
    {
        
    }
}
void Display(PNODE first)
{
    while(first!=NULL)
    {
        printf("%d  ",first->data);
        first=first->next;
    }
    printf("\n");
}
int main()
{   
    PNODE head=NULL;
    insertFirst(&head,75);
    insertFirst(&head,51);
    insertFirst(&head,21);
    insertFirst(&head,11);
    Display(head);
    
    return 0;
}
