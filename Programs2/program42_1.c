// Q1.Write a program which displays all elements which are perfect from singly linear linked list.


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

void DisplayPerfect(PNODE First)
{
    int fSum = 0;

    while(First != NULL)
    {
        for(int i = 1; i < (First -> data); i++)
        {
            if((First -> data) % i == 0)
            {
                fSum = fSum + i;
            }
        }
        if(fSum == (First -> data))
        {
            printf("%d\t",First -> data);
        }

        fSum = 0;

        First = (First -> next);
    }
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

    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    Display(Head);

    printf("\nThe perfect numbers are : ");
    DisplayPerfect(Head);

    return 0;
}