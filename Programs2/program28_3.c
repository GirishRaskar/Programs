// Q3.Write a program which accept string from user and copy capital characters of that string into another string.

#include<stdio.h>

void StrCpyCapX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
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
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrCpyCapX(Arr,Brr);

    printf("The copied String is : %s",Brr);

    return 0;
}