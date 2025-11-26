//////////////////////////////////////////////////////////
//
//  Function Name : CheckleapYear
//  Description   : Accept year and checks it is leap year or not
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program19_1
{
    public static void main(String A[])
    {
        int ivalue = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.CheckLeapYear(ivalue);
    }
}

class Logic
{
    void CheckLeapYear(int iNo)
    {
        if(iNo % 4 == 0  || iNo % 400 == 0)
        {
            System.out.println(iNo+" is leap year");
        }
        else
        {
            System.out.println(iNo+" is not a leap year");
        }
            
    }
        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 2024      Output: 2024 is leap year
//  Input: 2021      Output: 2021 is not a leap year
//
////////////////////////////////////////////////////////////////////