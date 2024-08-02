// Q4.Write a program which accept string from user and copy the characters of that string into another string by converting all capital characters into small case.

#include<stdio.h>
void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *src = *src + 32;
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

    StrCpySmall(Arr, Brr);

    printf("The copied string is : %s",Brr);

    return 0;
}