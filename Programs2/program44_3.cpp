// Q3.Write generic program to accept N values from user and return addition of that values.

#include<iostream>
using namespace std;

template<class T>
T Addition(T Brr[],int iSize)
{
    T Sum = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        Sum = Sum + Brr[i];
    }

    return Sum;
}

int main()
{
    int Count = 0;
    int i = 0;

    cout<<"Enter number of elements : "<<endl;
    cin>>Count;

    int *Arr = new int[Count];


    cout<<"Enter the elements : "<<endl;
    for(i = 0; i < Count; i++)
    {
        cin>>Arr[i];
    }


    int iRet = Addition(Arr,Count);
    cout<<"The Sum is : "<<iRet;

    delete []Arr;

    return 0;
}