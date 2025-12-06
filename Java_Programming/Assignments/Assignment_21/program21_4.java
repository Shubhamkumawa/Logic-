//////////////////////////////////////////////////////////
//
//  Function Name : Countfactors
//  Description   : Accept number and count factors of number 
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program21_4
{
    public static void main(String A[])
    {
        int ivalue = 0;
        int iRet = 0 ;

        System.out.println("Enter the number :");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        iRet = lobj.Countfactors(ivalue);
        System.out.println("Number of factors are :"+iRet);
       
    }
    
}

class Logic
{
    int Countfactors(int iNo)
    {
        
        int iCnt = 0;
        int iCount = 0 ;
        for(iCnt = 1 ; iCnt < iNo ; iCnt++)
        {
            if(iNo % iCnt== 0)
            {
              iCount++;   
            }
        }  
        return iCount;
    }

        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 12         Output: Number of factors are : 5
//
////////////////////////////////////////////////////////////////////
