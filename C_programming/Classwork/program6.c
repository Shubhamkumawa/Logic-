///////////////////////////////////////////////////////////////////////////
//
//  Function Name : add
//  Description   : Take two number to perform addition of two numbers
//  Input         : Integer , Integer
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 9/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int add(int a,int b)
{
    int sum =0;
    sum = a+b;      // business logic 
    return sum;
}
int main()
{
    int i=0,j=0,ans=0;

    printf("Enter first number:\n");
    scanf("%d",&i);

    printf("Enter second number:\n");
    scanf("%d",&j);
    
    ans=add(i,j);
    
    pritnf("Addition is:%d\n",ans);
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