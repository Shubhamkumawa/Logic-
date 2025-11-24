/////////////////////////////////////////////////////////
//
//  Function Name : Print_Numbers
//  Description   : Accept n number and prints number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void Print_Numbers(int iNo)
{
    int iCnt = 0;
    
    for(iCnt =1 ; iCnt <= iNo ; iCnt++ )
    {
        printf("%d\t ", iCnt);
    }
    
}

int main()
{
    int iValue = 0;
    

    printf("enter the number :");
    scanf("%d ",&iValue);

    Print_Numbers(iValue);
    

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10       Output: 1 2 3 4 5 6 7 8 9 10
//
////////////////////////////////////////////////////////////////////