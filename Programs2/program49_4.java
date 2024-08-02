//Q4.Write a program which accept matrix and check whether the matrix is identity matrix or not.
//Identity matrix is a square matrix with 1s along the diagonal and zero on all other positions.

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

    public boolean ChkIdentity()
    {
        int i = 0, j = 0;
        boolean bFlag = true;

        if(iRow != iCol)
        {
            return false;
        }

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(i==j)
                {
                    if(Arr[i][j] != 1)
                    {
                        bFlag = false;
                        
                    }
                }
                else
                {
                    if(Arr[i][j] != 0)
                    {
                        bFlag = false;
                    
                    }
                }
            }
        }

        return bFlag;
    }
}

class program49_4
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
        boolean bRet = false;

        bRet = mobj.ChkIdentity();
        if(bRet == true)
        {
            System.out.println("The matrix is Square");
        }
        else
        {
            System.out.println("The matrix is not Square");
        }
        
    }
}