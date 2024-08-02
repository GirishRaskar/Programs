// Q4.Write a program which accept string from user and accept one character. Return index of last occurence of that character.

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 1, iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }
        iCnt++;
        str++;
    }
    return iPos;
}
int main()
{
    char Arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter a character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(Arr,cValue);

    if(iRet == -1)
    {
        printf("Character not found");
    }
    else
    {
        printf("Last occurance of character is at %d",iRet);
    }

    return 0;

}