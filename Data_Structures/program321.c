#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void insertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    if (*first == NULL) // LL empty
    {
        (*first) = newn;
    }
    else // LL Atleast 1 node
    {
        newn->next = *first;
        (*first) = newn;
    }
}
void insertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    PNODE temp = NULL;

    if (*first == NULL) // LL empty
    {
        *first = newn;
    }
    else // LL Atleast 1 node
    {    
        temp = *first;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next=newn;
    }
}
void DeleteFirst(PPNODE first)
{
    PNODE temp=NULL;
    if(*first==NULL) //Case 1
    {
        return;
    }
    else if(((*first)->next)==NULL)//Case 2
    {
        free(*first);
        *first=NULL;
    }
    else//Case 3
    {
        temp=*first;
        *first=(*first)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    if(*first==NULL) //Case 1
    {
        return;
    }
    else if(((*first)->next)==NULL)//Case 2
    {
        free(*first);
        *first=NULL;
    }
    else//Case 3
    {

    }
}
void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |-> ", first->data);
        first = first->next;
    }
    printf("NULL");
    printf("\n");
}
int Count(PNODE first)
{
    int iCount = 0;
    while (first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
    insertFirst(&head, 75); // address for head
    insertFirst(&head, 51);
    insertFirst(&head, 21);
    insertFirst(&head, 11);
    Display(head); // value for first node
    iRet = Count(head);
    printf("\nCount of elements is : %d\n", iRet);
    insertFirst(&head, 101);
    insertFirst(&head, 111);
    insertFirst(&head, 121);
    Display(head); // value for first node
    iRet = Count(head);
    printf("\nCount of elements is : %d\n", iRet);
    DeleteFirst(&head);
    Display(head); // value for first node
    iRet = Count(head);
    printf("\nCount of elements is : %d\n", iRet);

    return 0;
}
