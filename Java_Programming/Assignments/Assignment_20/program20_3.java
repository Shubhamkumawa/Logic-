//////////////////////////////////////////////////////////
//
//  Function Name : Checkperfect
//  Description   : Accept number and prints number is perfect or not 
//  Input         : Integer 
//  Output        : integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////

import java.util.*;

class program20_3
{
    public static void main(String A[])
    {
        int ivalue = 0;
        int iRet = 0;

        System.out.println("Enter a number : ");
        Scanner sobj = new Scanner(System.in);
        ivalue = sobj.nextInt();

        Logic lobj = new Logic();
        iRet = lobj.CheckPerfect(ivalue);


        if(iRet == 6)
        {
            System.out.println(ivalue+" is perfect number");
        }
        else
        {
            System.out.println(ivalue+" is not a perfect number");
        }
    }
    
}

class Logic
{
    int CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1 ; iCnt < iNo ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum +iCnt ;
            }
        }
        return iSum ;
        
    }

        
}

////////////////////////////////////////////////////////////////////
//
//  Input: 3         Output: 3 is perfect number
//  Input: 4         Output: 4 is not perfect number
//
////////////////////////////////////////////////////////////////////
