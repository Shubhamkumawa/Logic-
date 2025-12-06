//////////////////////////////////////////////////////////
//
//  Function Name : CountEvenOddRange
//  Description   : Accept number and count even and odd 
//  Input         : Integer 
//  Output        : void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program21_2
{
    public static void main(String A[])
    {
        int ivalue = 0;
        
        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.CountEvenOddRange(ivalue);

       
    }
    
}

class Logic
{
    void CountEvenOddRange(int iNo)
    {
        
        int iCnt = 0;
        int iEvenCount = 0;
        int iOddCount = 0;
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEvenCount++;
            }
            else
            {
                iOddCount++;
            }
        }   
            
        System.out.println("Even numbers are : " + iEvenCount);
        System.out.println("Odd numbers are :" + iOddCount);
        
    }

        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 15         Output: Even numbers are : 7
//                            Odd numbers are : 8
//
////////////////////////////////////////////////////////////////////
