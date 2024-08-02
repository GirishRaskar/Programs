// Q1.Write a program which accept one number from user and off 7th bit of that number if it is on.Return modified number.

#include<stdio.h>

typedef unsigned int uint;

uint OffBit(uint iNo)
{
    uint iReturn = 0;
    uint iMask = 0xffffffbf;

    iReturn = iNo & iMask;
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