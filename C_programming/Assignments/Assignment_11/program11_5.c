/////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayRev
//  Description   : Accept starting and ending point and prints all number in reverse in that range
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayRev(int iNo1 , int iNo2)
{
    int iCnt = 0;
    for(iCnt = iNo2 ; iCnt >= iNo1 ; iCnt--)
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

    RangeDisplayRev(iValue1 , iValue2);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10.20       Output: 20 19 18 17 16 15 14 13 12 11 10   
//
////////////////////////////////////////////////////////////////////