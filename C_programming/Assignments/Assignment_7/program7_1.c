/////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accept n number and prints pattern 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>


void Pattern(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt ++)
    {
        printf("$\t*\t");
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0 ;
}

////////////////////////////////////////////
//
//  Input: 3       Output: $ * $ * $ *  
//
////////////////////////////////////////////