// Q2.Write a program which accept string from user and copy the contents of that string into another string.

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    if(iCnt < 0)
    {
        iCnt = -iCnt;
    }

    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;

        dest++;
        src++;
        iCnt--;
    }
    *dest = '\0';
}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrNCpyX(Arr,Brr,10);

    printf("The copied string is : %s",Brr);

    return 0;
}