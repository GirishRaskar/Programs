//Q4.Write a program which accept number from user and return multiplication of all digits.

#include<stdio.h>
int MultDigits(int iNo)
{
    int iDigit = 0, iPro = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo%10;
        if(iDigit != 0)
        {
            iPro = iPro * iDigit;
        }
        
        iNo = iNo/10;
    }
    return iPro;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("The multiplication is %d",iRet);

    return 0;
}