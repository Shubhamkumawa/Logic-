/////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Description   : Accept starting and ending point and prints sum of the range
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSum(int iNo1 , int iNo2)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo1 < 0 || iNo2 < 0 || iNo1 > iNo2)
    {
        printf("Invalid Range \n");
    }
    else
    {
        for(iCnt = iNo1 ; iCnt <= iNo2 ; iCnt++)
        {
            iSum = iSum+iCnt;
        
        }
    }
    
    return iSum;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int iRet =0 ;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1 , iValue2);
    printf("Addition %d ", iRet);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10.20       Output: Addition 165   
//
////////////////////////////////////////////////////////////////////