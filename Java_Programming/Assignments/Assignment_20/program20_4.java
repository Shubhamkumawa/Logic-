//////////////////////////////////////////////////////////
//
//  Function Name : FindLargestDigit
//  Description   : Accept number and prints largest digit
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program20_4 
{
    public static void main(String a[])
    {
        int ivalue = 0;
        int iret = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        logic lobj = new logic();
        iret = lobj.findLargestDigit(ivalue);
        System.out.println("Largest digit is : "+iret);
    }    
}

class logic

{
    int findLargestDigit(int iNo)
    {
        
        int iDigit = 0;
        int ilarge = 0;
        while( iNo > 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            if(iDigit>ilarge)
            {
                ilarge = iDigit;
            }
        }    
            
        return ilarge;
        
    }
   
}


////////////////////////////////////////////////////////////////////
//
//  Input: 546         Output: Largest digit is : 6
//
////////////////////////////////////////////////////////////////////