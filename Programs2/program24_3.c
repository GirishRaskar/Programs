// Q3.Accept character from user. If it is capital then display all the characters from input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly.

#include<stdio.h>
void Display(char ch)
{
    int i = 0, j = 0;
    
        if(ch >= 'A' && ch <= 'Z')
        {
            for(i = ch; i <= 'Z'; i++)
            {
                printf("%c",i);
            }
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            for(j = ch; j >= 'a'; j--)
            {
                printf("%c",j);
            }
        }
}
int main()
{
    char cValue = '\0';

    printf("Enter a character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}