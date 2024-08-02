// Q5.Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

#include<stdio.h>
void Display(char ch)
{
    printf("Decimal\tOctal\tHex\n");
    printf("%d\t%o\t%x",ch,ch,ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter a character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}