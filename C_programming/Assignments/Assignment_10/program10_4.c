/////////////////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Description   : Accept temoerature in fahrenheit and prints temperature in celcius  
//  Input         : Float 
//  Output        : Double
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0 ;

    dCelsius = (fTemp- 32.0)*(5.0/9.0);

    return dCelsius ;

}

int main()
{
    float fValue = 0.0 ;
    double dRet = 0.0 ;

    printf("Enter temperature in fahrenheit :");
    scanf("%f ",&fValue);

    dRet = FhtoCs(fValue);
    printf("Temprature in Celsius  %lf ", dRet);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10.56       Output: Temprature in Celsius -12.22222  
//
////////////////////////////////////////////////////////////////////