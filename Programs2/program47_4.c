//Q4.Write a program which accepts file name and one character from user and count number of occurances of that characters from that file.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int Freq(char *name)
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
            if(Buffer[i] == 'M')
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

    iRet = Freq(FileName);

    printf("The Frequency of M is %d",iRet);

   

    return 0;
}