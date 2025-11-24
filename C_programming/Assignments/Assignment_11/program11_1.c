/////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description   : Accept starting and ending point and prints all number in that range 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplay(int iNo1 , int iNo2)
{
    int iCnt = 0;
    for(iCnt = iNo1 ; iCnt <= iNo2 ; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1 , iValue2);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10.20       Output: 10 11 12 13 14 15 16 17 18 19 20   
//
////////////////////////////////////////////////////////////////////