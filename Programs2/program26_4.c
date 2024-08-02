// Q4.Write a program which accept string from user and display only digits from that string.

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
}
int main()
{
    char Arr[100];

    printf("Enter a String : ");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);


    return 0;
}