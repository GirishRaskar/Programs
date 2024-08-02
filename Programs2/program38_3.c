// Q3.Write a program which accept one number from user and and toggle 7th bit of that number .Return modified number.

#include<stdio.h>

typedef unsigned int uint;

uint OffBit(uint iNo)
{
    uint iReturn = 0;
    uint iMask = 0x00000040;

    iReturn = iNo ^ iMask;
}

int main()
{
    uint iValue = 0;
    uint iRet = 0;

    printf("Enter a number : ");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);

    printf("The modified number is : %u",iRet);

    return 0;
}