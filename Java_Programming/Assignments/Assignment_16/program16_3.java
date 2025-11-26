//////////////////////////////////////////////////////////
//
//  Function Name : FindFactorial
//  Description   : Accept number and prints factorial of number using loop
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program16_3
{
    public static void main(String A[])
    {
        int ivalue = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue=sobj.nextInt();

        Logic lobj = new Logic();
        iRet = lobj.FindFactorial(ivalue);
        System.out.println("Factorial of number is " +iRet);
    }
}

class Logic
{
    int FindFactorial(int iNo)
    {
        int iFact = 1 ;
        int iCnt = 0 ;
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
        {
            iFact = iFact*iCnt;

        }
        return iFact ;
    }
}

////////////////////////////////////////////////////////////////////
//
//  Input: 5       Output: Factorial of number is 120  
//
////////////////////////////////////////////////////////////////////