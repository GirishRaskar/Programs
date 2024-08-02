// Q2.Write a recursive program which accept number from user and return largest digit.

import java.util.*;

class program36_2
{
    public static int i;
    public static int iMax;

    public static int MaxDigit(int iNo)
    {
        int iDigit = 0;
        int iMax = iNo % 10;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            iNo = iNo / 10;

            MaxDigit(iNo);
        }
        return iMax;
    }
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        iRet = MaxDigit(iValue);

        System.out.println("The Largest Digit is : "+iRet);
    }
}