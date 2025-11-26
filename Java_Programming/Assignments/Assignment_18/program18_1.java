//////////////////////////////////////////////////////////
//
//  Function Name : CheckPrime
//  Description   : Accept number and prints number is prime or not  
//  Input         : Integer 
//  Output        : Boolean
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program18_1
{
    public static void main(String A[])
    {
        int ivalue = 0;
        boolean bRet = false ;

        System.out.println("Enter a number : ");
        Scanner sobj =  new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        bRet = lobj.CheckPrime(ivalue);

        if(bRet == true)
        {
            System.out.println(ivalue+" is a prime number "  );
        }
        else
        {
            System.out.println(ivalue+" is not a prime number "  );
        }
    }
}

class Logic
{
    boolean CheckPrime(int iNo)
    {
        int iCnt = 0 ;

        if(iNo<=1)
        {
            return false;
        }

        for(iCnt = 2 ; iCnt <= (iNo/2); iCnt++ )
        {
           if(iNo % iCnt == 0)
            {
                return false ;
            }
        }
        return true;
        
    }
        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 13      Output: 13 is a prime number
//  Input: 4       Output: 4 is not a prime number  
//
////////////////////////////////////////////////////////////////////