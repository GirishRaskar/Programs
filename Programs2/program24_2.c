// Q2.Accept character from user. If character is small display its corresponding capital character, and if it is small then display its corresponding capital. In other cases display as it is.

#include<stdio.h>
void Display(char ch)
{
    char cValue1 = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        cValue1 = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cValue1 = ch - 32;
    }
    else
    {
        cValue1 = ch;
    }

    printf("%c",cValue1);
    
}
int main()
{
    char cValue = '\0';

    printf("Enter a character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}