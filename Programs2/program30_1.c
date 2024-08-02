// Q1.Write a program which accepts 2 strings from user and concatenate N characters of second string after first string . Value of N should be accepted from user.

#include<stdio.h>
void StrNCatX(char *first, char *second, int iCnt)
{
    if(iCnt < 0)
    {
        iCnt = -iCnt;
    }

    while(*first != '\0')
    {
        first++;
    }

    while((*second != '\0') && (iCnt != 0))
    {
        *first = *second;

        first++;
        second++;
        iCnt--;
    }

    *first = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Infosystems ";
    char Brr[30] = "Logic Building";

    StrNCatX(Arr,Brr,5);

    printf("The Concatenated dtring is : %s",Arr);

    return 0;
}