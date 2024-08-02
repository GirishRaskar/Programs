// Q2.Write a program which accept string from user and copy characters of that string into another string by removing all white spaces.

#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[30] = "Marvel   lous Pyth   on";
    char Brr[30];

    StrCpyX(Arr,Brr);

    printf("The copied string is : %s",Brr);

    return 0;
}