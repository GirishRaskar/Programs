// Q3.Write a program which display product of all digits of all element from singly linear linked list.

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

void DisplayProduct(PNODE First)
{
    int iDigit = 0, temp = 0, iPro = 1;

    while(First != NULL)
    {
        temp = First -> data;
        while(temp != 0)
        {
            iDigit = temp % 10;
            if(iDigit != 0)
            {
                iPro = iPro * iDigit;
            }
            temp = temp / 10;
        }

        printf("%d\t",iPro);
        iPro = 1;

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
    int iRet = 0;

    InsertFirst(&Head,41);
    InsertFirst(&Head,32);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);

    Display(Head);

    DisplayProduct(Head);

    return 0;
}
