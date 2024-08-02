// Q3.Write a recursive program which accept string from user and count number of small characters.

import java.util.*;

class program36_3
{
    public static int i, iCount;

    public static int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
    
        if(i < Arr.length)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                iCount++;
            }
            i++;
            CountSmall(str);
        }
        return iCount;
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRet = 0;

        System.out.println("Enter a string");
        String sValue = sobj.nextLine();

        iRet = CountSmall(sValue);

        System.out.println("The count is : "+iRet);

    }
}