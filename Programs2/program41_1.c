// Q1.Write a program which search first occurance of particular element from singly linear linked list.

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

int SearchFirstOcc(PNODE First, int iNo)
{
    int iPos = 0, i = 1;

    while(First != NULL)
    {
        if(First -> data == iNo)
        {
            iPos = i;
            break;
        }
        First = First -> next;
        i++;
    }

    return iPos;

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

    InsertFirst(&Head,70);
    InsertFirst(&Head,30);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    Display(Head);
    
    printf("\n\nEnter a element to find its First Occurance : \n");
    scanf("%d",&iNo);
    iRet = SearchFirstOcc(Head,iNo);
    printf("\nThe First occurance is at %d\n\n",iRet);

    return 0;
}