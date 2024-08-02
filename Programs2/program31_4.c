// Q4.Write a program which accept string from user and copy the contents into another string by removing extra white spaces.

#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
    int wFound = 0;
    char *src0 = src;
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            if(wFound == 1)
            {
                *dest = ' ';
                dest++;
                
            }
            else
            {
                *dest = *src;
                src++;
                dest++;
            }
            wFound = 0;
            continue;
        }
        else
        {
            if(*src0 == ' ')
            {
                wFound = 0;
                src0++;
                src++;
            }
            else
            {
                wFound = 1;
                src++;
            }
        }
    }
    *dest = '\0';
}
int main()
{
    char Arr[100] = "Marvellous    Multi   OS ";
    char Brr[100];

    StrCpyX(Arr,Brr);

    printf("%s",Brr);

    return 0;

}