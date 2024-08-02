// Q4.Write a program which returns largest element from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc (sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn -> next = *First;
        *First = newn;
    }
}

int Maximum(PNODE First)
{
    
    int iMax = First -> data;

    while(First != NULL)
    {
        if(iMax < First -> data)
        {
            iMax = First -> data;
        }
        First = First -> next;
    }

    return iMax;

}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First -> data);
        First = First -> next;
    }
    printf("NULL");
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0, iNo = 0;

    InsertFirst(&Head,240);
    InsertFirst(&Head,320);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);

    Display(Head);

    iRet = Maximum(Head);
    printf("\n\nThe Maximum number is %d\n\n",iRet);

    return 0;
}