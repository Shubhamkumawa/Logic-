//////////////////////////////////////////////////////////
//
//  Function Name : SumEvenNumber
//  Description   : Accept number and prints sum of even number 
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program20_1
{
    public static void main(String A[])
    {
        int ivalue = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        iRet = lobj.SumEvenNumber(ivalue);

        System.out.println("Sum of even number :" +iRet);
    }
    
}

class Logic
{
    int SumEvenNumber(int iNo)
    {
        int iCnt = 0;
        int iEvensum = 0;
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iNo % 2 == 0)
            {
                iEvensum = iEvensum + iCnt ;
            }
        }
        return iEvensum ;
    }

        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 546         Output: Sum of even number : 10
//
////////////////////////////////////////////////////////////////////