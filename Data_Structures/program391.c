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

void insertFirst(PPNODE first,int no)
{
    PNODE newn =NULL;
    PNODE temp=NULL;
        
    newn =(PNODE)malloc(sizeof(NODE));
    newn ->data=no;
    newn ->next=NULL;
    if(*first ==NULL)
    {
        *first =newn;
    }
    else
    {
        newn->next=*first;
        *first=newn;
    }
}
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

void DeleteFirst(PPNODE first)
{
    PNODE temp=NULL;
    if(*first==NULL)
    {
        return;
    }
    else if(((*first) ->next)==NULL)
    {
        free(*first);
        *first=NULL;
    }
    else
    {
        temp=*first;
        *first=(*first)->next;
        free(temp);   
    }
}
void DeleteLast(PPNODE first)
{
    PNODE temp=NULL;

    if(*first==NULL)
    {
        return;
    }
    else if(((*first) ->next)==NULL)
    {
        free(*first);
        *first=NULL;
    }
    else
    {
        temp=*first;
        while((temp->next->next)!=NULL)//type 3 
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;

    }
}

void Display(PNODE first)
{
    while(first!=NULL)//type 1
    {
        printf("| %d | -> ",first->data);
        first=first->next;
    }
    printf("NULL\n");

}
int Count(PNODE first)
{
    int iCount=0;
    while(first!=NULL)
    {
        iCount++;
        first=first->next;
    }
    return iCount;
}

void insertAtPos(PPNODE first,int no,int iPos)
{
    int iSize = 0;
    iSize =Count(*first);
    if(  iPos<1   ||  iPos > iSize+1 ) //filter
    {
        printf("Invalid Position\n");
        return;
    }
    if( iPos==1)
    {
        insertFirst(first,no);
    }
    else if(iPos==iSize+1)
    {
        insertLast(first,no);
    }
    else
    {
        
    }
    
}

void DeleteAtPos(PPNODE first,int iPos)
{
    int iSize = 0;
    iSize =Count(*first);
    if(  iPos<1   ||  iPos > iSize ) //filter
    {
        printf("Invalid Position\n");
        return;
    }
    if( iPos==1)
    {
        DeleteFirst(first);
    }
    else if(iPos==iSize)
    {
        DeleteLast(first);
    }
    else
    {
        
    }
}

int main()
{
    PNODE head=NULL;
    int iRet=0;

    insertFirst(&head,51);
    insertFirst(&head,21);
    insertFirst(&head,11);

    Display(head);
    iRet=Count(head);
    printf("No of nodes are = %d\n",iRet);
    
    insertLast(&head,101);
    insertLast(&head,111);
    insertLast(&head,121);
    
    Display(head);
    iRet=Count(head);
    printf("No of nodes are = %d\n",iRet);
    
    DeleteFirst(&head);
    Display(head);
    iRet=Count(head);
    printf("No of nodes are = %d\n",iRet);

    DeleteLast(&head);
    Display(head);
    iRet=Count(head);
    printf("No of nodes are = %d\n",iRet);
    
    insertAtPos(&head,105,5);
    Display(head);
    iRet=Count(head);
    printf("No of nodes are = %d\n",iRet);

    


    return 0;
}