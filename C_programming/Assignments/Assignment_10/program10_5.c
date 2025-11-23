/////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description   : Accept area of square in feet and prints area of square in meter 
//  Input         : Integer 
//  Output        : Double
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dSqrMeter = 0.0 ;

    dSqrMeter = iNo*0.0929 ;
    return dSqrMeter ;

}
int main()
{
    int iValue = 0 ;
    double dRet = 0.0 ;

    printf("Enter Area in Square feet :");
    scanf("%d ",&iValue);

    dRet = SquareMeter(iValue);
    printf("Area in Square meter   %lf ", dRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10.23       Output: Area in Square meter 0.929000   
//
////////////////////////////////////////////////////////////////////