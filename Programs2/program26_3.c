// Q3.Write a program which accept string from user and toggle the case.
#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        
        str++;
    }
}
int main()
{
    char Arr[100];

    printf("Enter a String : ");
    scanf("%[^'\n']s",Arr);

    strtogglex(Arr);

    printf("The updated string is : %s",Arr);

    return 0;
}