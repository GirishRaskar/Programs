// Q3.write a program which accept string from user and reverse each word in place.

#include<stdio.h>
void StrWrdRev(char *str)
{
   char *start;
   char *end;
   char temp;

   while(*str != '\0')
   {
        start = str;
        end = str;
        while((*end != ' ') && (*end != '\0'))
        {
            end++;
        }
        end--;
        while(start < end)
        {
            temp = *start;
            *start = *end;
            *end = temp;

            start++;
            end--;
            str += 2;
        }
        if(*str == '\0')
        {
            break;
        }
        str++;
   } 
}
int main()
{
    char Arr[30] = "Marvellous Multi OS";

    StrWrdRev(Arr);

    printf("The word reversed string is : %s",Arr);

    return 0;
}