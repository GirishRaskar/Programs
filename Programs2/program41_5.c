// Q5.Write a program which returns smallest element from singly linear linked list.

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

int Minimum(PNODE First)
{
    
    int iMin = First -> data;

    while(First != NULL)
    {
        if(iMin > First -> data)
        {
            iMin = First -> data;
        }
        First = First -> next;
    }

    return iMin;

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

    InsertFirst(&Head,640);
    InsertFirst(&Head,240);
    InsertFirst(&Head,20);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);

    Display(Head);

    iRet = Minimum(Head);
    printf("\n\nThe Minimum number is %d\n\n",iRet);

    return 0;
}