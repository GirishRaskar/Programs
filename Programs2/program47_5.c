//Q5.Write a program which accepts file name and one count from user and read that number of characters from starting position.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<io.h>

void DisplayN(char *name, int iSize)
{
    int ReadSize = 0;
    char Buffer[10] = {'\0'};
    int i = 0;
    int fd = 0;

    fd = open(name,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }

    while(iSize > 0 && (ReadSize = read(fd, Buffer, (iSize < sizeof(Buffer) ? iSize : sizeof(Buffer)))) > 0)
    {
        for(i = 0; i < ReadSize ; i++)
        {
            printf("%c",Buffer[i]);
        }
        memset(Buffer,0,sizeof(Buffer));
        iSize = iSize - ReadSize;
    }

    close(fd);
}

int main()
{

    char FileName[50];
    int iCnt = 0;

    printf("Enter file name : ");
    scanf("%s",FileName);

    printf("Enter the number of characters you want to read : ");
    scanf("%d",&iCnt);

    DisplayN(FileName,iCnt);


    return 0;
}