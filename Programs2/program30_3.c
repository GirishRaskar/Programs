// Q.Write a program which accept two strings from user and check whether first N contents of two strings are equal or not.

#include<stdio.h>
#include<stdbool.h>

bool StrNCmpX(char *first, char *second, int iCnt)
{
    if(iCnt < 0)
    {
        iCnt = -iCnt;
    }
    while((*first != '\0') && (*second != '\0'))
    {
        if((*first != *second) || (iCnt == 0))
        {
            break;
        }

        first++;
        second++;
        iCnt--;
    }

    if( ((*first == '\0') && (*second == '\0')) || (iCnt == 0) )
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
    char Arr[30] = "Marvellous Infosystems";
    char Brr[30] = "Marvellous Logic Building";
    bool bRet = false;
    
    bRet = StrNCmpX(Arr,Brr,10);

    if(bRet == true)
    {
        printf("The strings are same");
    }
    else
    {
        printf("The Strings are different");
    }

    return 0;


}