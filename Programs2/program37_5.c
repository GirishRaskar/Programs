// Q5.Write a program which checks whether first and last bit is On or OFF.First bit means bit number 1 and last bit means bit number 32.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int uint;

bool ChkBit(uint iNo)
{
    uint iReturn = 0;
    bool bReturn = false;
    uint iMask = 0x80000001;

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
        printf("The first & last bits are ON");
    }
    else
    {
        printf("The Bits are OFF");
    }

    return 0;
}