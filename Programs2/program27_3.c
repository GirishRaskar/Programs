// Q3.Write a program which accept string from user and accept one character. Return index of first occurance of that character.

#include<stdio.h>
#include<stdbool.h>

int FirstOccurance(char *str, char ch)
{
    int iCount = 1;
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        iCount++;
        str++;
    }
    if(bFlag == true)
    {
        return iCount;
    }
    else
    {
        return -1;
    }
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

    iRet = FirstOccurance(Arr, cValue);

    if(iRet == -1)
    {
        printf("No character found");
    }
    else
    {
        printf("The first occurance of %c is at %d",cValue,iRet);
    }
    return 0;
}