//Q5.Accept a character from user and check whether that character is vowel or not.

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if((cValue=='a')||(cValue=='e')||(cValue=='i')||(cValue=='o')||(cValue=='u')||(cValue=='A')||(cValue=='E')||(cValue=='I')||(cValue=='O')||(cValue=='U'))
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
    
}
int main()
{
        char cValue='\0';
        BOOL bRet=FALSE;

        printf("Enter a character : ");
        scanf("%c",&cValue);

        bRet=ChkVowel(cValue);

        if(bRet==TRUE)
        {
            printf("It is Vowel");
        }
        else
        {
            printf("It is not Vowel");
        }
}