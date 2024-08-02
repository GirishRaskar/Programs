// Q5.Write a program which accept string from user reverse that string in place.

#include<stdio.h>
void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char Arr[100];

    printf("Enter a String : ");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("The Reversed stiring is : %s",Arr);he
}