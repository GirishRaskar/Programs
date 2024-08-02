//Q4.Accept two numbers from user and display first number in second number of times.

#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    int iCnt=0;
    if(iFrequency<0)
    {
        iFrequency=-iFrequency;
    }
    for(iCnt=1; iCnt<=iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iFreq = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    printf("Enter the frequency : ");
    scanf("%d",&iFreq);

    Display(iValue,iFreq);

    return 0;
}
