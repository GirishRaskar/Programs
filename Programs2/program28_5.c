// Q5.Write a program which accept two string from user and concatenate second string after first string.

#include<stdio.h>
void StrCatX(char *first, char *second)
{
    while(*first != '\0')
    {
        first++;
    }

    while(*second != '\0')
    {
        *first = *second;
        
        first++;
        second++;
    }
    *first = '\0';
}
int main()
{
    char Arr[] = "Marvellous Infosystems ";
    char Brr[] = "Logic Building";

    StrCatX(Arr,Brr);

    printf("The updated string is : %s",Arr);

    return 0;
}