//////////////////////////////////////////////////////////////
//
//  Function name : AdditionTwoNumbers 
//  Description   : It is use to perform Addition 
//  Input         : Float , Float
//  Output        : Float 
//  Author        : Shubham Shankarlal Kumawat
//  Date          : 09/10/2025
//
//////////////////////////////////////////////////////////////

#include <stdio.h>


float AdditionTwoNumbers(
                            float fNo1,                 // First input
                            float fNo2                  // Second input
                        )
{
    float fSum =0.0f;                                   // To store the result 

    if(fNo1<0.0f)                                       // Updator
    {
        fNo1=-fNo1;
    }

    if(fNo2<0.0f)                                       // Updator
    {
        fNo2=-fNo2;
    }
    fSum = fNo1+fNo2;                                   // business logic 
    return fSum;
}  

int main()
{
    float fValue1=0.0f,fValue2=0.0f;                    // TO accept user input
    float fRet=0.0f;                                    // To store the result

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);
    
    fRet=AdditionTwoNumbers(fValue1,fValue2);           // Method call
    
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