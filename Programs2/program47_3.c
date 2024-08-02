//Q3.Write a program which accepts file name from user and count number of white spaces from that file.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountSpaces(char *name)
{
    int ReadSize = 0;
    char Buffer[20] = {'\0'};
    int iCount = 0, i = 0;
    int fd = 0;

    fd = open(name,O_RDONLY);

    while((ReadSize = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0; i < ReadSize ; i++)
        {
            if(Buffer[i] == ' ')
            {
                iCount++;
            }
        }
    }

    close(fd);

    return iCount;
}

int main()
{
    int fd = 0;
    char FileName[50];
    int iRet = 0;

    printf("Enter file name : ");
    scanf("%s",FileName);

    iRet = CountSpaces(FileName);

    printf("The count of white spaces is %d",iRet);


    return 0;
}