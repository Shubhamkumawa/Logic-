/////////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Description   : Accept Width and height and prints area of rectangle  
//  Input         : Float,Float
//  Output        : Double
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth , float fHeight)
{
    float fArea = 0.0;
    fArea = fWidth*fHeight ;

    return fArea ;

}

int main()
{
    float fValue1 = 0.0 , fValue2 = 0.0 ;
    double dRet = 0.0 ;

    printf("Enter Width :");
    scanf("%f",&fValue1);

    printf("Enter Height :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1 , fValue2 );
    printf("Area of Rectangle is : %lf ", dRet);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 3 , 4       Output: Area of Rectangle is : 12.0000   
//
////////////////////////////////////////////////////////////////////
