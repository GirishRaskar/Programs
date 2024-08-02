// Q1.Write a recursive program which display below pattern.

// Input : 5
// Output : *   *   *   *   *

#include<iostream>
using namespace std;

void DisplayI(int iNo)
{
    while(iNo != 0)
    {
        cout<<"*\t";
        iNo--;
    }
}
void DisplayR(int iNo)
{
    if(iNo != 0)
    {
        cout<<"*\t";
        iNo--;
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

    cout<<"By Recursion : \n";
    DisplayR(iValue);

    return 0;
}