// Q2.Write a recursive program which accept number from user and return summation of its digits.

// Input : 879
// Output : 24

#include<iostream>
using namespace std;

int SumI(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;

        iNo = iNo / 10;
    }
    return iSum;
}

int SumR(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        SumR(iNo);
    }
    return iSum;
}


int main()
{
    int iValue = 0, iRetI = 0, iRetR = 0;

    cout<<"Enter a number : ";
    cin>>iValue;

    iRetI = SumI(iValue);
    cout<<"By Iteration : \n"<<iRetI;

    
    cout<<"\n\n";
    
    iRetR = SumR(iValue);
    cout<<"By Recursion : \n"<<iRetR;

    return 0;
}