// Q4.Write a recursive program which accept number from user and return its factorial.

// Input : Hello
// Output : 5

#include<iostream>
using namespace std;

int FactorialR(int iNo)
{
    static int iFact = 1;
    if(iNo != 0)
    {
        iFact = iFact * iNo
        iNo--;
        FactorialR(iNo);
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    int iRetI = 0, iRetR = 0;

    cout<<"Enter a number : ";
    cin>>iValue;
    
    
    iRetR = FactorialR(iValue);
    cout<<"By Recursion : \n"<<iRetR;

    return 0;
}