// Q5.Write a program to accept N values from user and return smallest value.

#include<iostream>
using namespace std;

template<class T>
T Min(T Brr[],int iSize)
{
    int i = 0;
    T Min = Brr[0];

    for(i = 0; i < iSize; i++)
    {
        if(Brr[i] > Min )
        {
            Min = Brr[i];
        }
    }

    return Min;
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

    Ret = Min(Arr,iCount);

    cout<<"The minimum is "<<Ret;
    
}