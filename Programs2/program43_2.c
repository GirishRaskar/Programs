// Q2.Write a program which display all palindrome elements of singly linked list.

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

void DisplayPalindrome(PNODE First)
{
    int iDigit = 0, temp = 0, iRev = 0;

    while(First != NULL)
    {
        temp = First -> data;
        while(temp != 0)
        {
            iDigit = temp % 10;
            iRev = iRev * 10 + iDigit;
            temp = temp / 10;
        }
        if(iRev == First -> data)
        {
            printf("%d\t",iRev);
        }
        iRev = 0;

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

    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,414);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    Display(Head);

    DisplayPalindrome(Head);

    return 0;
}
