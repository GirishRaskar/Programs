// Q1.Write a program which accept string from user and copy that character of that string into another string in reverse order.

#include<stdio.h>

void StrCpyRev(char *src , char *dest)
{
    char *src0 = src;

    while(*src != '\0')
    {
        src++;
    }
    src--;

    while(src >= src0)
    {
        *dest = *src;
        dest++;
        src--;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python";
    char Brr[30];

    StrCpyRev(Arr,Brr);

    printf("The reverse copied string is : %s",Brr);
    printf("\nThe reverse copied string is : %s",Arr);
}