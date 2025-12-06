//////////////////////////////////////////////////////////
//
//  Function Name : PrintDivisibleby2and3
//  Description   : Accept number and prints divisible by 2 and 3 
//  Input         : Integer 
//  Output        : Boolean
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program21_5
{
    public static void main(String A[])
    {
        int ivalue = 0;
        boolean bRet = false ;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        bRet = lobj.PrintDivisibleby2and3(ivalue);

        if(bRet == true)
        {
            System.out.println(ivalue+" is Divisible by 2 and 3 ");
        }
        else
        {
             System.out.println(ivalue+" is not Divisible by 2 and 3 ");
        }
       
    }
    
}

class Logic
{
    boolean PrintDivisibleby2and3(int iNo)
    {
        if((iNo %2) == 0  && (iNo % 3)== 0)
        {
            return true ;
        }
        else{
            return false ;
        }
    }

        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 54         Output: 54 is Divisible by 2 and 3
//  Input: 56         Output: 56 is not Divisible by 2 and 3
//
////////////////////////////////////////////////////////////////////
