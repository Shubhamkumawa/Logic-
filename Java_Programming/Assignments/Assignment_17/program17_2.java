//////////////////////////////////////////////////////////
//
//  Function Name : ChackPalindrom
//  Description   : Accept number and checks the number is palindrom or not
//  Input         : Integer 
//  Output        : Boolean
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program17_2
{
    public static void main(String A[])
    {
        int ivalue = 0;
        boolean bRet = false ;

        System.out.println("Enter a number  :");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        bRet = lobj.CheckPalindrom(ivalue);

        if(bRet == true)
        {
            System.out.println(ivalue+" number is Palindrom");
        }
        else
        {
            System.out.println(ivalue+" number is not palindrom");
        }
    }
}

class Logic
{
    boolean CheckPalindrom(int iNo)
    {
        int iDigit = 0 ;
        int iRev = 0;
        int temp = 0;

        temp = iNo;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo/10;
            iRev = (iRev*10) + iDigit ;
        }

        if(iRev == temp)
        {
            return true;
           
        }
        else
        {
            return false ;
            
        }
        
    }
}

////////////////////////////////////////////////////////////////////
//
//  Input: 121       Output: 121 number is Palindrom
//  Input: 124       Output: 124 number is not Palindrom      
//
////////////////////////////////////////////////////////////////////