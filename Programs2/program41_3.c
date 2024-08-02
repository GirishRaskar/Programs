// Q3.Write a program which returns addition of all element from singly linear linked list.

// Q2.Write a program which search last occurance of particular element from singly linear linked list.

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

int Addition(PNODE First)
{
    
    int iSum = 0;
    while(First != NULL)
    {
        iSum = iSum + (First -> data);
        First = First -> next;
    }

    return iSum;

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

    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    Display(Head);

    iRet = Addition(Head);
    printf("\n\nThe Addition is %d\n\n",iRet);

    return 0;
}