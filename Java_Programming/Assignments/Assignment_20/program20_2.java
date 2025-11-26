//////////////////////////////////////////////////////////
//
//  Function Name : PrintReverse
//  Description   : Accept number and prints reverse of number  
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program20_2
{
    public static void main(String A[])
    {
        int ivalue = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.PrintReverse(ivalue);

    }
    
}

class Logic
{
    void PrintReverse(int iNo)
    {
        int iCnt = 0;
        
        System.out.println("Reverse of number is : ");
        for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            System.out.println(iCnt);
        }
        
    }

        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 546         Output: Reverse of number is : 645
//
////////////////////////////////////////////////////////////////////