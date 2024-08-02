//Q3.Write application which accept file name from user and read all data from that file and display contents on screen.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[50];
    char Buffer[10] = {'\0'};
    int ReadSize = 0;

    printf("Enter file name which you want to read\n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDONLY);

    while((ReadSize = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(int i = 0; i < ReadSize; i++)
        {
            printf("%c",Buffer[i]);
        }
        memset(Buffer,0,sizeof(Buffer));
    }

    close(fd);

    return 0;

}