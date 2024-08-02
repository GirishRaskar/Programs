// Q1.Write a program which accepts string from user and count number of capital characters.

#include<stdio.h>
int CountCapital(char *str)
{
    int iCount = 0;
    if()
    {
        
    }
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("The number of capital characters are : %d",iRet);

    return 0;
}