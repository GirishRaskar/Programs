// Q2.Write  program which checks whether 5th and 18th bit is On or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int uint;

bool ChkBit(uint iNo)
{
    uint iReturn = 0;
    bool bReturn = false;
    uint iMask = 0x00020010;

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
        printf("The 5th and 18th bit is ON");
    }
    else
    {
        printf("Bits are OFF");
    }

    return 0;
}