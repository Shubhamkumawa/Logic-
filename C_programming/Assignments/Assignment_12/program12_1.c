/////////////////////////////////////////////////////////
//
//  Function Name : Print_Factors
//  Description   : Accept n number and prints all factors 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void Print_Factors(int iNo)
{
    int iCnt = 0;
    for(iCnt =1 ; iCnt <= (iNo/2) ; iCnt++ )
    {
        if(iNo%iCnt == 0)
        {
            printf("%d \t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("enter the number :");
    scanf("%d ",&iValue);

    Print_Factors(iValue);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10       Output: 1 2 5   
//
////////////////////////////////////////////////////////////////////