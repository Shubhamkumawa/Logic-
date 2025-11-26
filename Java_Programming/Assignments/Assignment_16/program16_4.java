//////////////////////////////////////////////////////////
//
//  Function Name : ReverseNumber
//  Description   : Accept number and prints the reverse number
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program16_4
{
    public static void main(String A[])
    {
        int ivalue = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        iRet = lobj.ReverseNumber(ivalue);

        System.out.println("Reverse of the number is :" +iRet);
    }
}

class Logic
{
    int ReverseNumber(int iNo)
    {
        int iDigit = 0 ;
        int iRev = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10 ;
            iRev = iRev*10 + iDigit ;
            
        }
        return iRev ;
        
    }
}

////////////////////////////////////////////////////////////////////
//
//  Input: 2395       Output: Reverse of the number is : 5932   
//
////////////////////////////////////////////////////////////////////