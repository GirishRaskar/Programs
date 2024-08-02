// Q2.Write a program which accepts string from user and count number of small characters.

#include<stdio.h>
int CountSmall(char *str)
{
    int iCount = 0;
    if()
    {
        
    }
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(arr);

    printf("The small characters are %d",iRet);

    return 0;
}