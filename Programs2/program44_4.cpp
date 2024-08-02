//Q4.Write generic program to accept N values from user and return largest values.

#include<iostream>
using namespace std;

template<class T>
T Max(T Brr[],int iSize)
{
    int i = 0;
    T Max = Brr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Brr[i] > Max )
        {
            Max = Brr[i];
        }
    }

    return Max;
}

int main()
{
    int iCount = 0;
    int *Arr = NULL;
    int i = 0;
    int Ret = 0;

    cout<<"Enter number of elements : ";
    cin>>iCount;

    Arr = new int[iCount];

    cout<<"Enter the elements : "<<endl;

    for(i = 0; i < iCount; i++)
    {
        cin>>Arr[i];
    }

    Ret = Max(Arr,iCount);

    cout<<"The max is "<<Ret;
    
}