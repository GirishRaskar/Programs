// Q1.Write a recursive program which accept string from user and count white spaces.

import java.util.*;

class program36_1
{
    public static int i, iCount;

    public static int CountSpaces(String str)
    {
        char Arr[] = str.toCharArray();
        
        if(i < Arr.length)
        {
            if(Arr[i] == ' ')
            {
                iCount++;
            }
            i++;
            CountSpaces(str);
        }
        return iCount;
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRet = 0;

        System.out.println("Enter a string");
        String sValue = sobj.nextLine();

        iRet = CountSpaces(sValue);

        System.out.println("The count is : "+iRet);

    }
}