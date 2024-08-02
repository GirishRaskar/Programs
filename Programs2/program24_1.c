// Q1.Write a program which displays ASCII table. Table contains Symbol,Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include<stdio.h>
void DisplayASCII()
{
    int i = 0;
    
    printf("Symbol\tDecimal\tHex\tOctal\n");

    for(i = 0; i <= 255; i++)
    {
        printf(" %c\t %d\t %x\t %o \n",i,i,i,i);
        int iCount = 0;
        char ch = 'A'; 

    }
}
int main()
{
    DisplayASCII();

    return 0;
}