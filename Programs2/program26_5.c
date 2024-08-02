// Q5.Write a program which accept string from user and count number of white spaces.

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter a String : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("The number of white spaces are : %d",iRet);

    return 0;
}