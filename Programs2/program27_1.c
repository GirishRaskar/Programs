// Q1.Write a program which accept string from user and accept one character.Check whether that character is present in string or not.

#include<stdio.h>
#include<stdbool.h>
bool ChkChar(char *str, char ch)
{
    bool bFlag = false;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}
int main()
{
    char Arr[100];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter a character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == true)
    {
        printf("The Character is present");
    }
    else
    {
        printf("The Character is not present");
    }
}