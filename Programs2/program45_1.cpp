// Q1.Write generic program which accept one value and one number from user.Print that value that number of times.

#include<iostream>
using namespace std;

template<class T>
void Display(T ch, int No)
{
    int i = 0;

    for(i = 1; i <= No; i++)
    {
        cout<<ch<<"\t";
    }
}

int main()
{
    
    int iCount = 0;
    char ch = '\0';

    cout<<"Enter a character : ";
    cin>>ch;

    cout<<"Enter how many number of times you want to print : ";
    cin>>iCount;

    Display(ch,iCount);

    return 0;

}