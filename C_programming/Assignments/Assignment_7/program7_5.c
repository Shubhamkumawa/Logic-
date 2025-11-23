/////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description   : Accept n number and prints first 5 multiples n number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////


#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        int iMult= 0;
        
        iMult= iNo* iCnt ;
        printf("%d\t",iMult);
        
        
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 5       Output: 5 10 15 20 25  
//
////////////////////////////////////////////////////////////////////