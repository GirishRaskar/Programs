// Q3.Write a recursive program which accept number from user and count the number of characters.

// Input : Hello
// Output : 5

#include<iostream>
using namespace std;

int StrlenR(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        iCount++;
        str++;
        StrlenR(str);
    }
    return iCount;
}


int main()
{
    char Arr[30];
    int iRetI = 0, iRetR = 0;

    cout<<"Enter a String : ";
    cin.getline(Arr,30);
    
    
    iRetR = StrlenR(Arr);
    cout<<"By Recursion : \n"<<iRetR;

    return 0;
}