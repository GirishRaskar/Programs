// Q.Write a recursivee program which display below pattern.

// OutPut : a  b   c   d   e  f

#include<iostream>
using namespace std;

void DisplayI()
{
    int iCnt = 1;
    char ch = 'a';

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
    static char ch = 'a';

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