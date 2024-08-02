// Q5.Accept division of student from user and depending on the division display exam timing. There are 4 divisions in school as A,B,C,D. Exam of division A at 7AM, B at 8:30 AM, C at 9:20 AM and D at 10:30 AM.(Application should be case insensitive)
// Input: C 
// Output: Your exam at 9.20 AM
// Input: d 
// Output: Your exam at 10.30 AM

#include<stdio.h>
void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam is at 7 AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam is at 8.30 AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam is at 9.20 AM");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam is at 10.30 AM");
    }
    else
    {
        printf("Invalid Input for Division");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter Your Division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}