//////////////////////////////////////////////////////////
//
//  Function Name : SumEvenOdd
//  Description   : Accept number and prints the sum of even and odd numbers 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program18_4
{
    public static void main(String A[])
    {
        int ivalue = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.SumEvenOdd(ivalue);
    }
}

class Logic
{
    void SumEvenOdd(int iNo)
    {
        int iEvenSum = 0;
        int iOddSum = 0 ;
        int iCnt = 0 ;
        for(iCnt = 1 ; iCnt < iNo ; iCnt++ )
        {
           if((iCnt % 2) == 0)
           {
                iEvenSum = iEvenSum + iCnt ;
           }
           else
           {
                iOddSum = iOddSum + iCnt ;

           }
        }

        System.out.println("Sum of Even digits is :" +iEvenSum);

        System.out.println("Sum of Odd digits is :" +iOddSum);
            
    }
        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10      Output: Sum of Even digits is : 20
//                         Sum of Odd digits is : 25
//
////////////////////////////////////////////////////////////////////