// Q4.Write a recursive program which accept number from user and return smallest digit.

import java.util.*;

class program36_4
{
    public static int iMin;

    public static int MinDigit(int iNo)
    {
        int iDigit = 0;
        int iMin = iNo % 10;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            iNo = iNo / 10;

            MinDigit(iNo);
        }
        return iMin;
    }
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        iRet = MinDigit(iValue);

        System.out.println("The smallest Digit is : "+iRet);
    }
}