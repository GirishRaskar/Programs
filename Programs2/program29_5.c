// Q5.Write a program which accept string from user and copy that characters of that string into another string by toggling the case.

#include<stdio.h>
void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *src = *src + 32;
        } 

        else if((*src >= 'a') && (*src <= 'z'))
        {
            *src = *src - 32;
        }

        *dest = *src;

        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Python 2";
    char Brr[30];

    StrCpyToggle(Arr,Brr);

    printf("The copied string is : %s",Brr);

    return 0;
}