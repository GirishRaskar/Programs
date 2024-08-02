// Q2.Write a program which displays all elements which are prime from singly linear linked list.


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

void DisplayPrime(PNODE First)
{
    int iCount = 0;
    while(First != NULL)
    {
        for(int i = 1; i <= (First -> data)/2; i++)
        {
            if((First -> data) % i == 0)
            {
                iCount++;
            }
        }
        if(iCount == 1)
        {
            printf("%d\t",First -> data);
        }

        First = First -> next;
        iCount = 0;
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
    InsertFirst(&Head,22);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);

    Display(Head);

    printf("\nThe Prime numbers are : ");
    DisplayPrime(Head);

    return 0;
}