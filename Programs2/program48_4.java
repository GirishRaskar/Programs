//Q4.Write a program which accept matrix and display addition of elements from each column

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

    public void ColumnSum()
    {
        int i = 0, j = 0, iSum = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0,iSum = 0; j < iCol ; j++)
            {
                iSum = iSum + Arr[j][i];
            }
            System.out.println("The Sum of column "+i+" is "+iSum);
        }
    }
}

class program48_4
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

        mobj.ColumnSum();
        
    }
}