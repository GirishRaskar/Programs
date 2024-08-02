// Q3.Write a program which accept string from user and copy that characters of that string into another string by converting all small characters into capital case.

#include<stdio.h>
void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *src = *src - 32;
        }

        *dest = *src;

        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python 2";
    char Brr[30];

    StrCpyCap(Arr, Brr);

    printf("The copied string is : %s ",Brr);

    return 0;
}