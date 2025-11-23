/////////////////////////////////////////////////////////
//
//  Function Name : TableRev
//  Description   : Accept amount in Us dolar  and prints it into indian currency 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int DollerToINR(int iNo)
{
    int iConverter = 0 ;
    iConverter = iNo*70;

    return iConverter ;

}

int main()
{
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter number of USD :");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d ", iRet);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10       Output: Value in INR is 700   
//
////////////////////////////////////////////////////////////////////