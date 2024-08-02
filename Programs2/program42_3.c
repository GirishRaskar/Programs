// Q3.Write a program which returns addition of all even element from singly linear linked list.


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

int AdditionEven(PNODE First)
{
    int iSum = 0;

    while(First != NULL)
    {
        if(First -> data % 2 == 0)
        {
            iSum = iSum + First -> data;
        }

        First = (First -> next);
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
    printf("NULL\n");
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,41);
    InsertFirst(&Head,32);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);

    Display(Head);

    iRet = AdditionEven(Head);
    printf("\nThe sum of even numbers is %d",iRet);

    return 0;
}
