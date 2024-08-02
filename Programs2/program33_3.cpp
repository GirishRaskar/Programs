// Q.Write a recursive program which display below pattern.

#include<iostream>
using namespace std;

void DisplayI()
{
    int iCnt = 5;

    while(iCnt > 0)
    {
        cout<<iCnt<<"\t";
        iCnt--;
    }
}

void DisplayR()
{
    static int iCnt = 5;

    if(iCnt > 0)
    {
        cout<<iCnt<<"\t";
        iCnt--;
        DisplayR();
    }
}
int main()
{
    DisplayI();

    cout<<endl;

    DisplayR();

    return 0;
}