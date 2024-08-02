// Q2.Write a program which accepts string from user and accept one character. Return frequency of that character.

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter a character whose frequency you want : ");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr, cValue);

    printf("The Frequency of %c is %d",cValue,iRet);

    return 0;
}