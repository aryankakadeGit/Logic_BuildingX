#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * lchild;
    struct node * rchild;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE first,int no)
{
    PNODE newn =  NULL;
    PNODE temp =NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild=NULL;
    newn->rchild=NULL;
    if(*first == NULL)      //IF TREE IS EMPTY 
    {
        *first = newn;
    }
    else                    //IF TREE HAS ONE NODE 
    {
        temp = *first;
        while(1)
        {
            if(no>temp->data) 
            // if element is Greater
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild=newn;
                    break;
                }
                
                temp = temp->rchild;
                
            }
            else if(no<temp->data) // if element is Smaller
            {
                if(temp->lchild==NULL)
                {
                    temp->lchild=newn;
                    break;
                }
                
                temp = temp ->lchild;
    
            }
            else if(no == temp->data) // if element is IDENTICAL
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
    if(first != NULL)
    {
        Inorder(first->lchild);
        printf("%d\n",first->data);
        Inorder(first->rchild);
    }
}

// DLR
void Preorder(PNODE first) 
{
    if(first != NULL)
    {        
        printf("%d\n",first->data);
        Preorder(first->lchild);
        Preorder(first->rchild);
    }
}




int main()
{
    PNODE head = NULL;
    Insert(&head,21);
    Insert(&head,11);
    Insert(&head,51);
    
    printf("INORDER TRAVERSAL : \n");
    Inorder(head);

    printf("PreORDER TRAVERSAL : \n");
    Preorder(head);

    return 0;
}