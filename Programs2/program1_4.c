//Q4.Accept one number and check whether it is divisible by 5 or not.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet=FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet=Check(iValue);
    if(bRet==TRUE)
    {
        printf("%d is Divisible by 5",iValue);
    }
    else
    {
        printf("%d is Not Divisible by 5",iValue);
    }
    return 0;
}