// Q3.Write a program which checks 7th and 15th and 21st and 28th bit is On or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int uint;

bool ChkBit(uint iNo)
{
    uint iReturn = 0;
    bool bReturn = false;
    uint iMask = 0x08104040;

    iReturn = iNo & iMask;

    if(iReturn == iMask)
    {
        bReturn = true;
    }

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
        printf("The 7th,15th,21st and 28th bit is ON");
    }
    else
    {
        printf("The Bits are OFF");
    }

    return 0;
}