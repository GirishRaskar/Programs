// Q5.Write generic program to accept N values and reverse the contents.

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *Brr, int iSize)
{
    int start = 0;
    int end = iSize - 1;
    int temp = 0;

    while(start < end)
    {
        temp = Brr[start];
        Brr[start] = Brr[end];
        Brr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int iCount = 0;
    int *Arr = NULL;
    int i = 0;

    cout<<"Enter number of elements : ";
    cin>>iCount;

    Arr = new int[iCount];

    for(i = 0; i < iCount; i++)
    {
        cin>>Arr[i];
    }

    Reverse(Arr,iCount);

    cout<<endl<<"The reversed elements are : "<<endl;
    for(i = 0; i < iCount; i++)
    {
        cout<<Arr[i]<<endl;
    }

    return 0;
}