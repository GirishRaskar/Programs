// Q3.Accept Character from user and check whether it is digit or not (0-9).
// Input: 7
// Output: TRUE
// Input: d
// Output: FALSE

#include<stdio.h>
#include<stdbool.h>
bool ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return true;
    }
    return false;
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}