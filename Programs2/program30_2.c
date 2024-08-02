// Q2.Write a program which accept two strings from user and check whether contents of two strings are equal or not.

#include<stdio.h>
#include<stdbool.h>

bool StrCmpX(char *first, char *second)
{
    while((*first != '\0') && (*second != '\0'))
    {
        if(*first != *second)
        {
            break;
        }
        first++;
        second++;
    }
    if((*first == '\0') && (*second == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    printf("Enter first string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string : ");
    scanf(" %[^'\n']s",Brr);

    bRet = StrCmpX(Arr,Brr);

    if(bRet == true)
    {
        printf("The String are same");
    }
    else
    {
        printf("The String are different");
    }

    return 0;
}