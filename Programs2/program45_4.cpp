// Q4.Write generic program to accept N values and search last Occurance of any specific value.

#include<iostream>
using namespace std;

template<class T>
int LastOccu(T Brr[], T Value, int iSize)
{
    int iPos = 0;
    int i = 0;
    int iCnt = 1;

    for(i = 0; i < iSize; i++)
    {
        if(Brr[i] == Value)
        {
            iPos = iCnt;
        }
        iCnt++;
    }
    return iPos;
}

int main()
{
    int iCount = 0;
    int *Arr = NULL;
    int i = 0;
    int iRet = 0;
    int iValue = 0;

    cout<<"Enter number of elements : ";
    cin>>iCount;

    Arr = new int[iCount];

    cout<<"Enter the elements : "<<endl;

    for(i = 0; i < iCount; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Enter a number whose first occurance you want to find : ";
    cin>>iValue;

    iRet = LastOccu(Arr,iValue,iCount);
    cout<<"The first occurance of the element is at : "<<iRet;

    return  0;
}