//Q1.Write a program which accept matrix from user and return addition of diagonal elements.

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

    public int DiagonalSum()
    {
        int i = 0, j = 0, iSum = 0;

        if(iRow != iCol)
        {
            System.out.println("The Matrix in not a Square Matrix");
            return -1;
        }

        for(i = 0; i < iRow; i++)
        {
            for(j = i; j < iCol && i == j; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum;
    }
}

class program48_1
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

        iRet = mobj.DiagonalSum();
        System.out.println("The sum of diagonal elements is "+iRet);
    }
}