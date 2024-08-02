// Q1.Write  program which checks whether 15th bit is On or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int uint;

bool ChkBit(uint iNo)
{
    bool bReturn = false;
    uint iMask = 0x00004000;

    bReturn = iNo & iMask;

    return bReturn;
}

int main()
{
    uint iValue = 0;
    bool bRet = false;

    printf("Enter a number : ");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("The 15th bit is ON");
    }
    else
    {
        printf("The 15th bit is OFF");
    }

    return 0;
}