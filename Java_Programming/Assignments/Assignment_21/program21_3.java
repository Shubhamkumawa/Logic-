//////////////////////////////////////////////////////////
//
//  Function Name : Displayfactors
//  Description   : Accept number and prints factors 
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program21_3
{
    public static void main(String A[])
    {
        int ivalue = 0;
        
        System.out.println("Enter a number : ");
        Scanner sobj =  new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        lobj.Displayfactors(ivalue);

       
    }
    
}

class Logic
{
    void Displayfactors(int iNo)
    {
        
        int iCnt = 0;

        System.out.println("Factors are : ");
        for(iCnt = 1 ; iCnt < iNo ; iCnt++)
        {
            if(iNo % iCnt== 0)
            {
              System.out.println(iCnt);   
            }
        }  
        
    }

        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 12         Output: Factors are : 1 2 3 4 6 
//
////////////////////////////////////////////////////////////////////
