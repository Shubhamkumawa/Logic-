/////////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Description   : Accept radius and prints area of cirlce 
//  Input         : Float 
//  Output        : Double
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14 ;

    double dArea = 0.0 ;
    dArea = 3.14*fRadius*fRadius;

    return dArea ;
}

int main()
{
    float fValue = 0.0 ;
    double dRet = 0.0 ;

    printf("Enter the radius of circle :");
    scanf("%f ",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of Circle is %lf ", dRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 3.00       Output: Area of Circle is 28.2600   
//
////////////////////////////////////////////////////////////////////