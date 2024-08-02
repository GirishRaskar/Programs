// Q4.Accept Character from user and check whether it is small case or not (a-z).
// Input: f
// Output: TRUE
// Input: D
// Output: FALSE

#include<stdio.h>
#include<stdbool.h>
bool ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

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