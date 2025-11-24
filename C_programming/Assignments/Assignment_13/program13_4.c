/////////////////////////////////////////////////////////
//
//  Function Name : Sum_Natural_Number
//  Description   : Accept n number and prints sum of first N natural number 
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int Sum_Natural_Number(int iNo)
{
    int iCnt = 0;
    int iSum = 0 ;
    
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        
            iSum = iSum+iCnt ;
        
        
    }

    return iSum ;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number :");
    scanf("%d ",&iValue);

    iRet = Sum_Natural_Number(iValue);
    printf("Sum : %d", iRet);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 6       Output: Sum : 21 
//
////////////////////////////////////////////////////////////////////