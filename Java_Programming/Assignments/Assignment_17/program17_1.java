//////////////////////////////////////////////////////////
//
//  Function Name : SumOfDigits
//  Description   : Accept number and prints the sum of digits of number
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program17_1
{
    public static void main(String A[])
    {
        int ivalue = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        iRet = lobj.SumOfDigits(ivalue);

        System.out.println("Sum of of digits :" +iRet);
    }
}

class Logic
{
    int SumOfDigits(int iNo)
    {
        int iDigit = 0 ;
        int iSum = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10 ;
            iSum = iSum + iDigit ;
            
        }
        return iSum ;
        
    }
}

////////////////////////////////////////////////////////////////////
//
//  Input: 2395       Output: Sum of of digits : 19    
//
////////////////////////////////////////////////////////////////////