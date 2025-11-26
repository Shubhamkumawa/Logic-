//////////////////////////////////////////////////////////
//
//  Function Name : CalculateSum
//  Description   : Accept number and prints the sum of first N natural number
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program16_1
{
    public static void main(String A[])
    {
        int ivalue = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        iRet = lobj.CalculateSum(ivalue);

        System.out.println("Sum of n natural number is :" +iRet);

    }
}

class Logic
{
    int CalculateSum(int iNo)
    {
        int iSum = 0 ;
        int iCnt = 0 ;

        for(iCnt = 1 ; iCnt<=iNo ; iCnt++)
        {
            iSum = iSum + iCnt ; 
        }

        return iSum ;
    }
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10       Output: Sum of n natural number is : 55   
//
////////////////////////////////////////////////////////////////////