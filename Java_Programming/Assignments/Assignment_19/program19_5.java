//////////////////////////////////////////////////////////
//
//  Function Name : CalculatePower
//  Description   : Accept number and checks the power of number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program19_5
{
    public static void main(String A[])
    {
        int ivalue1 = 0, ivalue2 = 0;

        System.out.println("Enter base : ");
        Scanner sobj = new Scanner(System.in);
        ivalue1 = sobj.nextInt();

        System.out.println("Enter exponent : ");
        ivalue2 = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.CalculatePower(2 ,5);
    }
}

class Logic
{
    void CalculatePower(int iBase , int iExp)
    {
        int iCnt = 0;
        int iPower = 1;
        for(iCnt = 1 ; iCnt <= iExp ; iCnt++)
        {
            iPower = iPower * iBase ;
        }
        System.out.println("Power of number :"+iPower);
    }

        
}

////////////////////////////////////////////////////////////////////
//
//  Input: Enter base : 2         Output: Power of number : 32
//         Enter exponent : 5
//
////////////////////////////////////////////////////////////////////