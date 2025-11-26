//////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description   : Accept number and checks number is even or odd 
//  Input         : Integer 
//  Output        : Boolean
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program16_2
{
    public static void main(String A[])
    {
        int ivalue = 0;
        boolean bRet = false;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        bRet = lobj.CheckEvenOdd(ivalue);
        if(bRet == true)
        {
            System.out.println(ivalue+" is Even number");
        }
        else
        {
            System.out.println(ivalue+" is Odd number");
        }
    }
}

class Logic
{
    boolean CheckEvenOdd(int iNo)
    {
        if(iNo %2 == 0)
        {
            return true ;
        }
        else
        {
            return false;
        }
    }
}

////////////////////////////////////////////////////////////////////
//
//  Input: 2395       Output: 2395 is Odd number
//  Input: 2394       Output: 2394 is Even number  
//
////////////////////////////////////////////////////////////////////