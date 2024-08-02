// Q5.Accept a string from user and check whether the string is palindrome or not without considering its case.

#include<stdio.h>
#include<stdbool.h>

bool ChkPalin(char *str)
{
    char *start = str;
    char *end = str;
    bool bFlag = true;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {   
        if((*start >= 'A') && (*start <= 'Z'))
        {
            *start = *start + 32;
        }
        else if((*end >= 'A') && (*end <= 'Z'))
        {
            *end = *end + 32;
        }

        if(*start != *end)
        {
            bFlag = false;
            break;
        }

        start++;
        end--;
    }
    
    return bFlag;
}

int main()
{
    char Arr[30] = "@abccba@";
    bool bRet = false;

    bRet = ChkPalin(Arr);

    if(bRet == true)
    {
        printf("String is a palindrome");
    }
    else
    {
        printf("String is not a palindrome");
    }

    return 0;
}