#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * prev;
    struct node * next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first , PPNODE last , int no)
{
    PNODE newn = NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->prev=NULL;
    newn->next=NULL;
    if(*first==NULL && *last==NULL) //LL is empty
    {
        *first=newn;
        *last=newn;
    }
    else                            //LL one or more nodes
    {
        newn->next=*first;
        (*first)->prev=newn;
        *first=newn;

    }
    (*last)->next=*first;
    (*first)->prev=*last;
}
void InsertLast(PPNODE first , PPNODE last , int no)
{
    PNODE newn = NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->prev=NULL;
    newn->next=NULL;
    if(*first==NULL && *last==NULL) //LL is empty
    {
        *first=newn;
        *last=newn;
    }
    else                            //LL one or more nodes
    {
        

    }
    (*last)->next=*first;
    (*first)->prev=*last;
}
void InsertAtPos(PPNODE first , PPNODE last , int no)
{
    
}
void DeleteFirst(PPNODE first , PPNODE last )
{
    
}void DeleteLast(PPNODE first , PPNODE last )
{
    
}
void DeleteAtPos(PPNODE first , PPNODE last , int Pos )
{
    
}
void Display(PNODE first , PNODE last)
{
    do
    {
        printf("<=>|  %d  |<=>",first->data);
        first=first->next;
    }while(first!=last->next);
    printf("NULL\n");
}
int Count(PNODE first , PNODE last)
{
    int iCount=0;
    do
    {
        iCount++;
        first=first->next;
    }while(first!=last->next);
    
    return iCount;
}
int main()
{
    PNODE head=NULL;
    PNODE tail=NULL;
    int iRet=0;
    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);
    Display(head,tail);
    iRet=Count(head,tail);
    printf("Nodes =%d\n",iRet);

    return 0;
}