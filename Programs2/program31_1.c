// Q1.Write a program which accept string from user and count number of words from string.


#include<stdio.h>
int WordCount(char *str)
{
    int wFound = 0;
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str != ' ')
        {
            if(wFound == 0)
            {
                iCount++;
            }
            wFound = 1;
            str++;
        }
        else
        {
            wFound = 0;
            str++;
        }
    }
    return iCount;
}

int main()
{
    char Arr[100] = "   Marvellous Multi          OS    Pune";
    int iRet = 0;

    iRet = WordCount(Arr);

    printf("The number of words are : %d ",iRet);

    return 0;
}