//////////////////////////////////////////////////////////
//
//  Function Name : CheckSign
//  Description   : Accept number and prints the number is positive or negative or zero 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program18_5
{
    public static void main(String A[])
    {
        int ivalue = 0;

        System.out.println("Enter a number :");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.CheckSign(ivalue);
    }
}

class Logic
{
    void CheckSign(int iNo)
    {
        if(iNo < 0)
        {
            System.out.println("Number is negative");
        }
        else if (iNo > 0)
        {
            System.out.println("Number is positive");   
        }
        else 
        {
            System.out.println("Number is zero");
        }

            
    }
        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 2      Output: Number is positive
//  Input: -2     Output: Number is negative
//  Input: 0      Output: Number is zero
//
////////////////////////////////////////////////////////////////////