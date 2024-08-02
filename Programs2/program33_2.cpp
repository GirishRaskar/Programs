// Q2.Write a recursive program which display below pattern.

#include<iostream>
using namespace std;

void DisplayI()
{
    int iCnt = 1;

    while(iCnt <= 5)
    {
        cout<<iCnt<<"\t";
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;

    if(iCnt <= 5)
    {
        cout<<iCnt<<"\t";
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    cout<<endl;

    DisplayI();

    return 0;
}