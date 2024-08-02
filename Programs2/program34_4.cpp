// Q4.Write a recursive program which display below pattern.

// Input : 6
// Output : A   B   C   D  E   F  

#include<iostream>
using namespace std;

void DisplayI(int iNo)
{
    char ch = 'A';
    int iCnt = 1;
    while(iCnt <= iNo)
    {
        cout<<ch<<"\t";
        ch++;
        iCnt++;
    }
}
void DisplayR(int iNo)
{
    static int iCnt = 1;
    static char ch = 'A';
    if(iCnt <= iNo)
    {
        cout<<ch<<"\t";
        iCnt++;
        ch++;
        DisplayR(iNo);
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter a number : ";
    cin>>iValue;

    cout<<"By Iteration : \n";
    DisplayI(iValue);
    
    cout<<"\n\n";
    
    cout<<"By Recursion : \n";
    DisplayR(iValue);

    return 0;
}