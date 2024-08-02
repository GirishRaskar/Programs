// Q1.Accept Character from user and Check whether it is alphabet or not (A-Z a-z).
// Input: F 
// Output: TRUE
// Input: &
// Output: FALSE

#include<stdio.h>
#include<stdbool.h>
bool ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
    {
        return true;
    }
    return false;
}
int main()
{
    char cValue = '\0';
    bool bRet = 0;

    printf("Enter a character : ");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

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