//////////////////////////////////////////////////////////
//
//  Function Name : findSmallestdigit
//  Description   : Accept number and prints smallest digit 
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program20_5
{
    public static void main(String a[])
    {
        int ivalue = 0;
        int iret = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        logic lobj = new logic();
        iret = lobj.findSmallestdigit(ivalue);
        System.out.println("Smallest digit is : "+iret);
    }
}

class logic
{
    int findSmallestdigit(int iNo)
    {
        int iDigit = 0;
        int ismall = 9 ;
        while( iNo !=0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            if(iDigit<ismall)
            {
                ismall = iDigit;
            }
        }    
            
        return ismall;

    }
}

////////////////////////////////////////////////////////////////////
//
//  Input: 546         Output: Smallest digit is : 4
//
////////////////////////////////////////////////////////////////////
