// Q2. Write a program which accepts string from user and convert it into upper case.


#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char Arr[100];

    printf("Enter a String : ");
    scanf("%[^'\n']s",Arr);

    struprx(Arr);

    printf("The updated string is : %s",Arr);

    return 0;
}