// Q.Write  aprogram which display below pattern.

#include<iostream>
using namespace std;

void DisplayI()
{
    int iCnt = 1;
    char ch = 'A';
    while(iCnt <= 6)
    {
        cout<<ch<<"\t";
        iCnt++;
        ch++;
    }
}

void DisplayR()
{
    static int iCnt = 1;
    static char ch = 'A';

    if(iCnt <= 6)
    {
        cout<<ch<<"\t";
        iCnt++;
        ch++;
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