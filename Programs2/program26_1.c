// Q1.Write a program which accept string from user and convert it into lower case.

#include<stdio.h>
void strlwrx(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char arr[100];

    printf("Enter a string : ");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("The modified string is %s",arr);

    return 0;
}