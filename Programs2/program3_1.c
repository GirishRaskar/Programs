//Q1.Write a program which accept one number from user and print that number of even numbers on screen.

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt=0;
   if(iNo<0)
   {
        return;
   }
   for(iCnt=1; iCnt<=(iNo*2); iCnt++)
   {
        if(iCnt%2 == 0)
        {
            printf("%d\n",iCnt);
        }
   }

}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}