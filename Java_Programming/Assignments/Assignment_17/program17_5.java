//////////////////////////////////////////////////////////
//
//  Function Name : PrintTable
//  Description   : Accept number and prints the table 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program17_5
{
    public static void main(String A[])
    {
        int ivalue = 0;

        System.out.println("Enter a number :");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.PrintTable(ivalue);
    }
}

class Logic
{
    void PrintTable(int iNo)
    {
        int iTable = 0 ;
        int iCnt = 0 ;
        for(iCnt = 1 ; iCnt <= 10 ; iCnt++ )
        {
            iTable = iNo * iCnt ;
            System.out.println(iTable);
    }
        }
        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 2      Output: 2 4 6 8 10 12 14 16 18 20
//
////////////////////////////////////////////////////////////////////