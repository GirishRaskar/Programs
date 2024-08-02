// Q5.Write a recursive program which accept number from user and return its product of digits.

// Input : 523
// Output : 30

#include<iostream>
using namespace std;

int Mult(int iNo)
{
    int iDigit = 0;
    static int iPro = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        iPro = iPro * iDigit;

        iNo = iNo / 10;

        Mult(iNo);
    }
    return iPro;
}


int main()
{
    int iValue = 0;
    int iRetI = 0, iRetR = 0;

    cout<<"Enter a number : ";
    cin>>iValue;
    
    
    iRetR = Mult(iValue);
    cout<<"By Recursion : \n"<<iRetR;

    return 0;
}