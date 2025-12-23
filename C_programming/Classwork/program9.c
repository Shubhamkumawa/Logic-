///////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description   : Take two number to perform addition of two numbers
//  Input         : Float , Float
//  Output        : Float
//  Author        : Shubham Shankarlal kumawat
//  Date          : 9/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

float AdditionTwoNumbers(float fNo1,float fNo2)
{
    float fSum =0.0f;

    
    // updator
    if(fNo1<0.0f)
    {
        fNo1=-fNo1;
    }

    if(fNo2<0.0f)
    {
        fNo2=-fNo2;
    }
    fSum = fNo1+fNo2;      // business logic 
    return fSum;
}
int main()
{
    float fValue1=0.0f,fValue2=0.0f,fRet=0.0f;

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);
    
    fRet=AdditionTwoNumbers(fValue1,fValue2);
    
    pritnf("Addition is:%f\n",fRet);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
//
//  Input1 : 10.5       Input2 : 3.2       Output : Addition is : 13.7      
//  Input1 : -10.5      Input2 : 3.2       Output : Addition is : 13.7
//  Input1 : 10.5       Input2 : -3.2      Output : Addition is : 13.7
//  Input1 : -10.5      Input2 : -3.2      Output : Addition is : 13.7
//  Input1 : 10.5       Input2 : 0.0       Output : Addition is : 10.5
//
///////////////////////////////////////////////////////////////////////////