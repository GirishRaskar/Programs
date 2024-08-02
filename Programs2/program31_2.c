// Q2.Write a program which accept string from user and return length of largest word.


#include<stdio.h>
int MaxWordCount(char *str)
{
    int iCnt = 0, iMax = 0;

    while(*str != '\0')
    {
        if(*str != ' ')
        {
            str++;
            iCnt++;

            if(iCnt > iMax)
            {
                iMax = iCnt;
            }

            continue;
        }

        str++;
        iCnt = 0;
    }

    return iMax;
}

int main()
{
    char Arr[100] = " Hi My Name   ";
    int iRet = 0;

    iRet = MaxWordCount(Arr);

    printf("The length of largest word is : %d ",iRet);

    return 0;
}