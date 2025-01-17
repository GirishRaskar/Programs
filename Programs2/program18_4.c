// Q4.Accept number of rows and number of columns from user and display below pattern.

// Input :     iRow = 6        iCol = 6
// Output : 
//             *   *   *   *   *   *
//             *   #   #   #   *   *
//             *   #   #   *   $   *   
//             *   #   *   $   $   *
//             *   *   $   $   $   *
//             *   *   *   *   *   *

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
       printf("Number of Rows And Columns should be same!!");
       return; 
    }
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i==1 && j<=iCol) || (i+j == iCol+1 )||( j == iCol && i<=iRow )|| (j == 1 && i <= iRow) ||( j <= iCol && i == iRow))
            {
                printf("*\t");
            }
            else if(i+j <= iCol)
            {
                printf("#\t");
            }
            else if(i+j > iCol+1)
            {
                printf("$\t");
            }
            else 
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}