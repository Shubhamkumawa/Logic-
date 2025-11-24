/////////////////////////////////////////////////////////
//
//  Function Name : Count_Factors
//  Description   : Accept n number and prints count of factors
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int Count_Factors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt =1 ; iCnt <= (iNo/2) ; iCnt++ )
    {
        if(iNo%iCnt == 0)
        {
            iCount++;
        }
    }
    return iCount ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number :");
    scanf("%d ",&iValue);

    iRet = Count_Factors(iValue);
    printf("Total number of factors : %d",iRet);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10       Output: Total number of factors : 3   
//
////////////////////////////////////////////////////////////////////