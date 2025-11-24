/////////////////////////////////////////////////////////
//
//  Function Name : Sum_Even_Number
//  Description   : Accept n number and prints sum of first n even number 
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int Sum_Even_Number(int iNo)
{
    int iCnt = 0;
    int iSum = 0 ;
    
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        if(iCnt%2 == 0)
        {
            iSum = iSum+iCnt ;
        }
        
    }

    return iSum ;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number :");
    scanf("%d ",&iValue);

    iRet = Sum_Even_Number(iValue);
    printf("Sum of first N even number : %d", iRet);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 3       Output: Sum of first N even number : 2   
//
////////////////////////////////////////////////////////////////////