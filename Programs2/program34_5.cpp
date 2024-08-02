// Q5.Write a recursive program which display below pattern.

// Input : 6
// Output : a   b   c  d   e   f  

#include<iostream>
using namespace std;

void DisplayI(int iNo)
{
    char ch = 'a';
    int iCnt = 1;
    while(iCnt <= iNo)
    {
        cout<<ch<<"\t";
        ch++;
        iCnt++;
    }
}
void DisplayR(int iNo)
{
    static int iCnt = 1;
    static char ch = 'a';
    if(iCnt <= iNo)
    {
        cout<<ch<<"\t";
        iCnt++;
        ch++;
        DisplayR(iNo);
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter a number : ";
    cin>>iValue;

    cout<<"By Iteration : \n";
    DisplayI(iValue);
    
    cout<<"\n\n";
    
    cout<<"By Rceursion : \n";
    DisplayR(iValue);

    return 0;
}