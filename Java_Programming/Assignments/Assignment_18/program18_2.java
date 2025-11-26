//////////////////////////////////////////////////////////
//
//  Function Name : PrintEvenNumber
//  Description   : Accept number and prints even number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program18_2
{
    public static void main(String A[])
    {
        int ivalue = 0;

        System.out.println("Enter a  number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.PrintEvenNumber(ivalue);
    }
}

class Logic
{
    void PrintEvenNumber(int iNo)
    {
        int iCnt = 0 ;

        System.out.println("Even numbers are : ");
        for(iCnt = 1 ; iCnt < iNo ; iCnt++ )
        {
           if((iCnt % 2) == 0)
           {
                System.out.print(iCnt+"\t");
           }
        }
            
    }
        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10      Output: Even numbers are : 2 4 6 8 10 
//
////////////////////////////////////////////////////////////////////