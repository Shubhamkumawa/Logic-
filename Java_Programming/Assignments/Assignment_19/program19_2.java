//////////////////////////////////////////////////////////
//
//  Function Name : DisplayGrade
//  Description   : Accept marks and display grades 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program19_2
{
    public static void main(String A[])
    {
        int ivalue = 0;

        System.out.println("Enter marks out of 100 : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.DisplayGrade(ivalue);
    }
}

class Logic
{
    void DisplayGrade(int iNo)
    {
        if(iNo <= 100 && iNo >= 91)
        {
            System.out.println("Grade A+");
        }
        else if(iNo <= 90  && iNo >= 81)
        {
            System.out.println("Grade A");
        }
        else if(iNo <= 80  && iNo >= 71)
        {
            System.out.println("Grade B");
        }
        else if(iNo <= 70  && iNo >= 61)
        {
            System.out.println("Grade C");
        }
        else if(iNo <= 60   && iNo >= 51)
        {
            System.out.println("Grade D");
        }
        else
        {
            System.out.println("Fail");
        }

        }
        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 89      Output: Grade A
//
////////////////////////////////////////////////////////////////////