#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Insert(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;
    if (*first == NULL) // IF TREE IS EMPTY
    {
        *first = newn;
    }
    else // IF TREE HAS ONE NODE
    {
        temp = *first;
        while (1)
        {
            if (no > temp->data)
            // if element is Greater
            {
                if (temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if (no < temp->data) // if element is Smaller
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }

                temp = temp->lchild;
            }
            else if (no == temp->data) // if element is IDENTICAL
            {
                printf("UNABLE TO INSERT AS ELEMENT IS DUPLICATE\n");
                free(newn); // Mem leak
                break;
            }
        }
    }
}

// LDR
void Inorder(PNODE first)
{
    if (first != NULL)
    {
        Inorder(first->lchild);
        printf("%d\n", first->data);
        Inorder(first->rchild);
    }
}

// DLR
void Preorder(PNODE first)
{
    if (first != NULL)
    {
        printf("%d\n", first->data);
        Preorder(first->lchild);
        Preorder(first->rchild);
    }
}

// LRD
void Postorder(PNODE first)
{
    if (first != NULL)
    {
        Postorder(first->lchild);
        Postorder(first->rchild);
        printf("%d\n", first->data);
    }
}

bool search(PNODE first, int no)
{
    bool bFlag = false;
    while (first != NULL)
    {
        if (no > first->data)
        {
            first = first->rchild;
        }
        else if (no < first->data)
        {
            first = first->lchild;
        }
        else if (no == first->data)
        {
            bFlag = true;
            break;
        }
    }
}
int count(PNODE first)
{
    static int iCount = 0;
    if(first!=NULL)
    {
        iCount++;
        count(first->lchild);
        count(first->rchild);
    }
    return iCount;
}
int main()
{
    PNODE head = NULL;
    Insert(&head, 21);
    Insert(&head, 11);
    Insert(&head, 51);
    Insert(&head, 67);
    Insert(&head, 40);
    Insert(&head, 10);
    Insert(&head, 13);
    Insert(&head, 38);
    bool bRet = false;
    int iRet = 0 ;

    printf("INORDER TRAVERSAL : \n");
    Inorder(head);

    bRet = search(head,47);
    if(bRet == true)
    {
        printf("Element is present \n");
    }
    else{
        printf("There is no such element\n");
    }
    iRet=count(head);
    printf(" no of elements are %d\n",iRet);
    return 0;
}