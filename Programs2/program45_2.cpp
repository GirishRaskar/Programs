// Q2.Write generic program to accept N values and count frequency of any specific value.

#include<iostream>
using namespace std;

template<class T>
int Frequency(T Brr[], T No, int iSize)
{
    int i = 0, iCount = 0;;

    for(i = 0; i < iSize; i++)
    {
        if(Brr[i] == No)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iCount = 0;
    int * Arr = NULL;
    int i = 0;
    int iRet = 0;
    int iFreq = 0;

    cout<<"Enter number of elements : ";
    cin>>iCount;

    Arr = new int[iCount];

    cout<<"Enter elements : "<<endl;

    for(i = 0; i < iCount; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Enter a number whose frequency you want to check : ";
    cin>>iFreq;

    iRet = Frequency(Arr,iFreq,iCount);
    cout<<"The freq of "<<iFreq<<" is "<<iRet;

    return 0;
}