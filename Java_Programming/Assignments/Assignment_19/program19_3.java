//////////////////////////////////////////////////////////
//
//  Function Name : CheckDivisible
//  Description   : Accept number and checks number is divisible by 5 and 11
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program19_3
{
    public static void main(String A[])
    {
        int ivalue = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.CheckDivisible(ivalue);
    }
}

class Logic
{
    void CheckDivisible(int iNo)
    {
        if((iNo % 5) == 0 && (iNo %11) == 0)
        {
            System.out.println(iNo+" is Divisible by 5 and ll");
        }
        
        else
        {
            System.out.println(iNo+" is not Divisible by 5 and ll");
        }

        }
        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 55      Output: 55 is Divisible by 5 and ll
//  Input: 10      Output: 10 is not Divisible by 5 and ll
//
////////////////////////////////////////////////////////////////////