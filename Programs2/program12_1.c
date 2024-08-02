//Q1.Accept number from user and display
//Input: 4
//Output: A   B   C   D

#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
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
