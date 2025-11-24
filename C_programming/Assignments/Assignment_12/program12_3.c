/////////////////////////////////////////////////////////
//
//  Function Name : Sum_of_Factors
//  Description   : Accept n number and prints sum of factors
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int Sum_of_Factors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt =1 ; iCnt <= (iNo/2) ; iCnt++ )
    {
        if(iNo%iCnt == 0)
        {
            iSum = iSum +iCnt ;
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

    iRet = Sum_of_Factors(iValue);
    printf(" Sum of factors : %d",iRet);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10       Output: Sum of factors : 8   
//
////////////////////////////////////////////////////////////////////