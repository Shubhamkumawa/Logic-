///////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description   : Take two number to perform addition of two numbers
//  Input         : Integer , Integer
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 9/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int AdditionTwoNumbers(int iNo1,int iNo2)
{
    int iSum =0;
    iSum = iNo1+iNo2;      // business logic 
    return iSum;
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);
    
    iRet=AdditionTwoNumbers(iValue1,iValue2);
    
    pritnf("Addition is:%d\n",iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////
//
//
//  Input1 : 10       Input2 : 3       Output : Addition is : 13     
//  Input1 : 111      Input2 : 3       Output : Addition is : 114
//  Input1 : 115      Input2 : 568     Output : Addition is : 683
//
///////////////////////////////////////////////////////////////////