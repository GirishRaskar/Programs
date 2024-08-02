//Q5.Write application which accept file name from user and one string form user. Write that string at the end of file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[50];
    char Arr[100] = {'\0'};
    int WriteSize = 0;
    int ReadSize = 0;

    printf("Enter file name which you want to read\n");
    scanf("%s",FileName);

    printf("%s",Arr);

    fd = open(FileName,O_RDWR | O_APPEND);

    printf("Enter a string : \n");
    scanf(" %[^'\n']s",Arr);

    WriteSize = write(fd,Arr,sizeof(Arr));

    close(fd);
    
    return 0;

}