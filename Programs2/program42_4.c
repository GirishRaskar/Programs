// Q4.Write a program which returns second maximum element from singly linear linkedlist.

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

int SecMaximum(PNODE First)
{
    int iMax = 0;
    int iSecMax = 0;

    if(First -> next == NULL)
    {
        iSecMax = First -> data;
    }
    else
    {
        iMax = First -> data;
        iSecMax = First -> next -> data;

        while(First != NULL)
        {
            if(iMax < First -> data)
            {
                iMax = First -> data;
            }
            if((First -> data > iSecMax) && (First -> data < iMax))
            {
                iSecMax = First -> data;
            }
            First = First -> next;
        }
    }
        return iSecMax;

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

    InsertFirst(&Head,320);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);
    InsertFirst(&Head,240);

    Display(Head);

    iRet = SecMaximum(Head);
    printf("\n\nThe second Maximum number is %d\n\n",iRet);

    return 0;
}