// Q5.Write a program which display largest digits of all element from singly linear linked list.

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

void DisplaySmall(PNODE First)
{
    int iDigit = 0, temp = 0, iMax = 0;

    while(First != NULL)
    {
        temp = First -> data;
        iMax = temp % 10;
        while(temp != 0)
        {
            iDigit = temp % 10;

            if(iMax < iDigit)
            {
                iMax = iDigit;
            }
        
            temp = temp / 10;
        }

        printf("%d\t",iMax);

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

    InsertFirst(&Head,419);
    InsertFirst(&Head,532);
    InsertFirst(&Head,250);
    InsertFirst(&Head,11);

    Display(Head);

    DisplaySmall(Head);

    return 0;
}

