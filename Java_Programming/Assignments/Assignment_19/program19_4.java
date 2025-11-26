//////////////////////////////////////////////////////////
//
//  Function Name : PrintsDigits
//  Description   : Accept number and prints digits of number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program19_4
{
    public static void main(String A[])
    {
        int ivalue = 0;

        System.out.println("Enter a number :");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.PrintDigits(ivalue);
    }
}

class Logic
{
    void PrintDigits(int iNo)
    {
        int iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10 ;
            System.out.println(iDigit);
        }
    }

        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 55      Output: 5
//                         5
//
////////////////////////////////////////////////////////////////////