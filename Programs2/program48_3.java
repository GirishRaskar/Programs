//Q3.Write a program which accept matrix and return largest number from both the diagonals.

import java.util.*;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int iNo1, int iNo2)
    {
        this.iRow = iNo1;
        this.iCol = iNo2;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elemets : ");

        int i = 0, j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("The entered elements are : ");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int MaxDiagonal()
    {
        int i = 0, j = 0, iMax = 0;

        if(iRow != iCol)
        {
            return -1;
        }
        
        iMax = Arr[0][0];
        for(i = 0; i < iRow; i++)
        {
            for(j = i; j < iCol && (i == j || i + j == iCol+1); j++)
            {
                if(iMax < Arr[i][j])
                {
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax;
    }
}

class program48_3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int iValue1 = sobj.nextInt();
        
        System.out.println("Enter number of columns : ");
        int iValue2 = sobj.nextInt();

        Matrix mobj = new Matrix(iValue1,iValue2);

        mobj.Accept();
        mobj.Display();

        int iRet = 0;
        iRet = mobj.MaxDiagonal();
        if(iRet == -1)
        {
            System.out.println("The number of rows and colums should be same");
        }
        else
        {
            System.out.println("The Max of diagonal elements is : "+iRet);
        }
    }
}