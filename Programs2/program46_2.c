//Q2.Write application which accept file name from user and create that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[50];


    printf("Enter file name which you want to create\n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to create file.\n");
    }
    else 
    {
        printf("File created Successfully.\n");
    }

    return 0;

}