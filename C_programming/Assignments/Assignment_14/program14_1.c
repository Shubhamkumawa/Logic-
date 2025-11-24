/////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description   : Accept number and prints digits in reverse 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit= iNo% 10 ;
        iNo = iNo / 10;

        printf("%d\n",iDigit);
    }
    
}

int main()
{
    int iValue = 0 ;
    
    printf("Enter the number: ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    
    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 354      Output: 4
//                          5   
//                          3
////////////////////////////////////////////////////////////////////