//////////////////////////////////////////////////////////////////////////////
//     
//  File name :     program560.c
//  Descreption :   Binary Search Tree.
//  Author :        Prashant V. Surve
//  Date :          5/08/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Insert(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(1)
        {
            if(no == temp->data)
            {
                printf("Unable to insert the data \n");
                free(newn);
                break;
            }
            else if(no > temp->data)                                 //rchild
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }

                temp = temp->rchild;
            }
            else if(no < temp->data)                                 //lchid
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }

                temp = temp->lchild;
            }
        }
    }

}

void Inorder(PNODE first)
{
    if(first != NULL)
    {
        
    }
}


int main()
{
    PNODE head = NULL ;

    Insert(&head,11);
    Insert(&head,9);
    Insert(&head,17);

    
    return 0;
}