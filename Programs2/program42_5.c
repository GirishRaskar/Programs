// Q5.Write a program which displays addition of digits of element from singly linear linked list.


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

void SumDigit(PNODE First)
{
    int iSum = 0, iDigit = 0, temp = 0;

    while(First != NULL)
    {
        temp = First -> data;
        while(temp != 0)
        {
            iDigit = temp % 10;
            iSum = iSum + iDigit;
            temp = temp / 10;
        }

        printf("%d\t",iSum);
        iSum = 0;

        First = (First -> next);
    }
    printf("\n");
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

    InsertFirst(&Head,640);
    InsertFirst(&Head,240);
    InsertFirst(&Head,20);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);

    Display(Head);

    SumDigit(Head);

    return 0;
}
