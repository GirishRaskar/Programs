// Q5.Write a program which accept string from user and replace each occurence of first character of each word into capital case.

#include<stdio.h>
void StrCap(char *src)
{
    int wFound = 0;
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            if((wFound == 0) && ((*src >= 'a') && (*src <= 'z')))
            {
                *src = *src - 32;
            }
            wFound = 1;
            src++;
        }
        else if(*src == ' ')
        {
            wFound = 0;
            src++;
        }
    }
}
int main()
{
    char Arr[100] = "Marvellous infosystems by Piyush khairnar";
    

    StrCap(Arr);

    printf("%s",Arr);

    return 0;

}