// Q3.Write a program which accepts string from user and return difference between frequency of small characters and frequency of Capital characters.

#include<stdio.h>
int Difference(char *str)
{
    int iCapital = 0, iSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        str++;  
    }
    return iSmall - iCapital;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string : ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    if(iRet == -1)
    {
        printf("Entered Input is INVALID");
    }
    else
    {
        printf("The difference is %d",iRet);
    }


    return 0;
}