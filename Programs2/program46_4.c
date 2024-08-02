//Q4.Write application which accept file name from user and display size of file.

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
    int iCount = 0;

    printf("Enter file name which you want to read\n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Failed to open file.\n");
    }

    while((ReadSize = read(fd,Buffer,sizeof(Buffer))) != 0) 
    {
        iCount = iCount + ReadSize;
    }   

    printf("The size of the file is %d bytes",iCount);

    close(fd);

    return 0;

}