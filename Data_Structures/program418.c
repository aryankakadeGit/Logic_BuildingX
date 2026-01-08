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
        (*last)->next=newn;
        newn->prev=*last;
        *last=newn;
    }
    (*last)->next=*first;
    (*first)->prev=*last;
}

void DeleteFirst(PPNODE first , PPNODE last )
{
    if(*first==NULL && *last==NULL)//LL Empty
    {
        return;
    }
    else if (*first==*last)//LL One Node
    {
        free(*first);
        *first=NULL;
        *last=NULL;
    }
    else
    {
        *first=(*first)->next;
        free((*first)->prev);
    }
    (*last)->next=*first;
    (*first)->prev=*last;
    
}void DeleteLast(PPNODE first , PPNODE last )
{
    if(*first==NULL && *last==NULL)//LL Empty
    {
        return;
    }
    else if (*first==*last)//LL One Node
    {
        free(*first);
        *first=NULL;
        *last=NULL;
    }
    else
    {
        *last=(*last)->prev;
        free((*last)->next);
    }
    (*last)->next=*first;
    (*first)->prev=*last;
}
void InsertAtPos(PPNODE first , PPNODE last , int no)
{
    
}
void DeleteAtPos(PPNODE first , PPNODE last , int Pos )
{
    
}
void Display(PNODE first , PNODE last)
{
    if(first==NULL && last ==NULL) // LL empty
    {
        printf("Linked list is empty\n");
        return;
    }
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
    if(first==NULL && last ==NULL) // LL empty
    {
        return 0;
    }
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

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);
    Display(head,tail);
    iRet=Count(head,tail);
    printf("Nodes =%d\n",iRet);

    DeleteFirst(&head,&tail);
    Display(head,tail);
    iRet=Count(head,tail);
    printf("Nodes =%d\n",iRet);

    DeleteLast(&head,&tail);
    Display(head,tail);
    iRet=Count(head,tail);
    printf("Nodes =%d\n",iRet);



    return 0;
}