/////////////////////////////////////////////////////////
//
//  Function Name : Table
//  Description   : Accept n number and prints table 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 5       Output: 5 10 15 20 25 30 35 40 45 50 
//
////////////////////////////////////////////////////////////////////