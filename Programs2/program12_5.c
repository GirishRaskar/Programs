//Q5.Accept number from user and display below pattern.

//Input : 8
//Output : 2 4 6 8 10 12 14 16

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 2; iCnt<= (iNo*2); iCnt=iCnt+2)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}