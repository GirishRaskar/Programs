// Q4.Accept string from user and reverse the contents of that string by toggling the case.

#include<stdio.h>

void StrRevTogX(char *str)
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

        if((*start >= 'a') && (*start <= 'z'))
        {
            *start = *start - 32;
        }
        else if((*start >= 'A') && (*start <= 'Z'))
        {
            *start = *start + 32;
        }
        else if((*end >= 'A') && (*end <= 'Z'))
        {
            *end = *end + 32;
        }
        else if((*end >= 'A') && (*end <= 'Z'))
        {
            *end = *end + 32;
        }

        start++;
        end--;  
    }

}

int main()
{
    char Arr[30] = "Marvellous";

    StrRevTogX(Arr);

    printf("The updated string is : %s",Arr);


    return 0;
}