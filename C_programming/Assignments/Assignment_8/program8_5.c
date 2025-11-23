/////////////////////////////////////////////////////////
//
//  Function Name : TableRev
//  Description   : Accept n number and prints tables in reverse  
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = 10 ; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t",iCnt*iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    TableRev(iValue);
    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 5       Output: 50 45 40 35 30 25 20 15 10 5   
//
////////////////////////////////////////////////////////////////////