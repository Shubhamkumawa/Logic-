//////////////////////////////////////////////////////////
//
//  Function Name : CountDigit
//  Description   : Accept number and prints the count of digits in number
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program16_5
{
    public static void main(String A[])
    {
        int ivalue = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        iRet = lobj.CountDigit(ivalue);

        System.out.println("Total number of digits :" +iRet);
    }
}

class Logic
{
    int CountDigit(int iNo)
    {
        int iDigit = 0 ;
        int iCount = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10 ;
            iCount++ ;
            
        }
        return iCount ;
        
    }
}

////////////////////////////////////////////////////////////////////
//
//  Input: 2395       Output: Total number of digits : 4    
//
////////////////////////////////////////////////////////////////////