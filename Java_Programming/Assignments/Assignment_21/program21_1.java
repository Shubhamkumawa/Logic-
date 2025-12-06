//////////////////////////////////////////////////////////
//
//  Function Name : ProductofDigits
//  Description   : Accept number and prints product of digits  
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program21_1
{
    public static void main(String A[])
    {
        int ivalue = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        iRet = lobj.ProductofDigits(ivalue);

        System.out.println("Product of digits : " + iRet);
    }
    
}

class Logic
{
    int ProductofDigits(int iNo)
    {
        
        int iDigit = 0;
        int iProduct = 1;
        while( iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iProduct = iProduct * iDigit ;
        }    
            
        return iProduct ;
        
    }

        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 54         Output: Product of digits : 20
//
////////////////////////////////////////////////////////////////////
