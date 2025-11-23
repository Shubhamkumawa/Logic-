/////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept n number and prints pattern  
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0 ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0 ;

}

////////////////////////////////////////////////////////////////////
//
//  Input: 5       Output: * * * * * # # # # #   
//
////////////////////////////////////////////////////////////////////