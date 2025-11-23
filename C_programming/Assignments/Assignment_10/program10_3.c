/////////////////////////////////////////////////////////
//
//  Function Name : KMToMeter
//  Description   : Accept Distance and prints distance in metres  
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int KMToMeter(int iNo)
{
    int iConverter = 0 ;

    iConverter = iNo*1000 ;

    return iConverter ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter distance :");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);
    printf("Distance in metres %d ", iRet);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10       Output: Distance in metres 10000   
//
////////////////////////////////////////////////////////////////////