// Q1.Write a program which accept a string from user and copy the contents of that string into another string.

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;

        dest++;
        src++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrCpyX(Arr,Brr);

    printf("The copied string is : %s",Brr);

    return 0;
}