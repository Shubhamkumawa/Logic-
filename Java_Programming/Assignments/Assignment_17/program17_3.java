//////////////////////////////////////////////////////////
//
//  Function Name : Findmax
//  Description   : Accept n number and prints the maximum number
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program17_3
{
    public static void main(String A[])
    {
        int ivalue1 = 0;
        int ivalue2 = 0;
        boolean bRet = false;

        System.out.println("Enter two number :");
        Scanner sobj = new Scanner(System.in);
        ivalue1 = sobj.nextInt();
        ivalue2 = sobj.nextInt();

        Logic lobj = new Logic();
        bRet = lobj.FindMax(ivalue1 , ivalue2);

        if(bRet == true)
        {
            System.out.println("Maximum number is "+ivalue1);

        }
        else
        {
            System.out.println("Maximum number is "+ivalue2);
        }
    }
}

class Logic
{
    boolean FindMax(int iNo1 , int iNo2)
    {
       if(iNo1 > iNo2)
       {
         return true ;
         
       } 
       else
       { 
         return false ;
         
       }    
        
    }
}

////////////////////////////////////////////////////////////////////
//
//  Input: 23 , 45       Output: Maximum number is 45    
//
////////////////////////////////////////////////////////////////////