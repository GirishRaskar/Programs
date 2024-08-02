// Q4.Write a program which accept string from user and copy small characters of that string into another string.

#include<stdio.h>
void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
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
    char Arr[] = "Marvellous multi OS";
    char Brr[30];

    StrCpySmall(Arr,Brr);

    printf("The copied string is %s",Brr);

    return 0;
}