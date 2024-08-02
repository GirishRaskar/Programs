// Q.1 Write a recursive program which display below pattern.

// Output : *  *   *   *   *

#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;
    if(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    }
}

void DisplayI()
{
    int iCnt = 1;
    while(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    DisplayR();

    DisplayI();

    return 0;
}