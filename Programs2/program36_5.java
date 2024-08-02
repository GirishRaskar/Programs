// Q5.Write  arecursive program which accept number from user and return its reverse number.

import java.util.*;

class program36_5
{
    public static int iRev;

    public static int Reverse(int iNo)
    {
        int iDigit = 0;
        int iRev = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10;

            Reverse(iNo);
        }
        return iRev;
    }
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        iRet = Reverse(iValue);

        System.out.println("The Reverse of the number is : "+iRet);
    }
}