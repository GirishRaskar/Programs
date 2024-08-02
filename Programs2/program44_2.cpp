// Q2.Write generic program to find largest number from three numbers.

#include<iostream>
using namespace std;

template<class T>
T Max(T No1, T No2, T No3)
{
    T Max = 0;
    if(No1 > No2 && No1 > No3)
    {
        Max = No1;
    }
    else if(No2 > No1 && No2 > No3)
    {
        Max = No2;
    }
    else
    {
        Max = No3;
    }

    return Max;
}

int main()
{
    int Value1 = 0, Value2 = 0, Value3 = 0;
    int Ret = 0;


    cout<<"Enter first number : ";
    cin>>Value1;

    cout<<"Enter second number : ";
    cin>>Value2;

    cout<<"Enter second number : ";
    cin>>Value3;

    Ret = Max(Value1,Value2,Value3);

    cout<<"The Maximum of three numbers is : "<<Ret;

    return 0;
}