//////////////////////////////////////////////////////////
//
//  Function Name : PrintOddNumber
//  Description   : Accept number and prints odd number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program18_3
{
    public static void main(String A[])
    {
        int ivalue = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.PrintOddNumber(ivalue);
    }
}

class Logic
{
    void PrintOddNumber(int iNo)
    {
        int iCnt = 0 ;
        System.out.println("Odd numbers are : ");
        for(iCnt = 1 ; iCnt < iNo ; iCnt++ )
        {
           if((iCnt % 2) == 1)
           {
                System.out.print(iCnt+"\t");
           }
        }
            
    }
        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10      Output: Odd numbers are : 1 3 5 7 9 
//
////////////////////////////////////////////////////////////////////