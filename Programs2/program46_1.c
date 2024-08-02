//Q1.Write application which accept file name from user and open that file in read mode.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[50];

    fd = creat("Demo.txt",0777);

    printf("Enter file name which you want to open\n");
    scanf("%s",FileName);

    fd = open("Demo.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.\n");
    }
    else 
    {
        printf("File opened Successfully.\n");
    }

    close(fd);

    return 0;

}