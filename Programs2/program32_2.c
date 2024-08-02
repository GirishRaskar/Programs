// Q2.Write a program which accept string from user and print below pattern.

#include<stdio.h>

void Pattern(char *str)
{
    int iCount = 0;
    int i = 0, j = 0;
    char *str0 = str;
    
    while(*str0 != '\0')
    {
        iCount++;
        str0++;
    }
    

    for(i = 0; i < iCount; i++)
    {
        printf("\n");
        str0 = str;

        for(j = 1; j <= iCount-i; j++)
        {
            printf("%c  ",*str0);
            str0++;
        }

    }
}

int main()
{
    char Arr[100];

    printf("Enter a string : ");
    scanf("%[^'\n']s",Arr);

    Pattern(Arr);

    return 0;
}