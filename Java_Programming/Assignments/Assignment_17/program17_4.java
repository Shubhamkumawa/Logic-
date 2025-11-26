//////////////////////////////////////////////////////////
//
//  Function Name : FindMin
//  Description   : Accept n number and prints the minimum number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program17_4
{
    public static void main(String A[])
    {
      int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0;

      System.out.println("Enter three number : ");
      Scanner sobj = new Scanner(System.in);
      ivalue1 = sobj.nextInt();
      ivalue2 = sobj.nextInt();
      ivalue3 = sobj.nextInt();

      Logic lobj = new Logic();
      lobj.FindMin(ivalue1, ivalue2, ivalue3);
    }
}

class Logic
{
    void FindMin(int iNo1 , int iNo2 , int iNo3)
    {
       if(iNo1 < iNo2)
       {
         if(iNo3 < iNo1)
         {
          System.out.println("Minimum number is " +iNo3);
         }
         else
         {
          System.out.println("Minimum number is " +iNo1);
         }
       } 
       else
       {
         System.out.println("Minimum number is " +iNo2);
       }    
        
    }
}

////////////////////////////////////////////////////////////////////
//
//  Input: 15,14,13       Output: Minimum number is 13    
//
////////////////////////////////////////////////////////////////////