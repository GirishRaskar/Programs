// Q4.Write a program which accepts string from user and check whether it contains vowel in it or not.

#include<stdio.h>
#include<stdbool.h>
bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'A'||*str == 'E'||*str == 'I'||*str == 'O'||*str == 'U'||*str == 'a'||*str == 'e'||*str == 'i'||*str == 'o'||*str == 'u')
        {
            return true;
            break;
        }   
        str++;
    }

    return false;   
}
int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter a string : ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;
}