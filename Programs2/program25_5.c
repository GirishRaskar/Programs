// Q5.Write a program which accept string from user and display it in reverse order.

#include<stdio.h>

void Reverse(char *str)
{
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

   while(end >= str)
   {
        printf("%c",*end);
        end--;
   }
}
int main()
{
    char arr[100];

    printf("Enter a string : ");
    scanf("%[^'\n']s",arr);

    
    Reverse(arr);

    return 0;
    

    
}