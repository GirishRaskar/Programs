// 1.Write generic program to multiply two numbers.

#include<iostream>
using namespace std;

template<class T>
T Multiply(T No1, T No2)
{
    T Ans = 0;

    Ans = No1 * No2;

    return Ans;
}

int main()
{
    float fValue1 = 0, fValue2 = 0;
    float fRet = 0;

    cout<<"Enter first number : ";
    cin>>Value1;

    cout<<"Enter second number : ";
    cin>>Value2;

    Ret = Multiply(Value1,Value2);

    cout<<"The Multiplication of two numbers is : "<<Ret;

    return 0;

}