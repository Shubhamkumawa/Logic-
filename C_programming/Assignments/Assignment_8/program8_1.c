/////////////////////////////////////////////////////////
//
//  Function Name : Number
//  Description   : Accept n number and prints less if less than 50, medium  if greater than 50, large if greater than 100 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Less");

    }
    else if(iNo> 50  && iNo <100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter number:");

    scanf("%d",&iValue);

    Number(iValue);

    return 0;

}

////////////////////////////////////////////////////////////////////
//
//  Input: 5       Output: Less
//  Input: 56      Output: Medium
//  Input: 125     Output: Greater  
//
////////////////////////////////////////////////////////////////////