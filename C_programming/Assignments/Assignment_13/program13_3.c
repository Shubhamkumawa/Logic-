/////////////////////////////////////////////////////////
//
//  Function Name : Print_Odd_Number
//  Description   : Accept n number and prints odd number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void Print_Odd_Number(int iNo)
{
    int iCnt = 0;
    
    for(iCnt =1 ; iCnt <= iNo ; iCnt++ )
    {
        if(iCnt%2 == 1)
        {
            printf("%d\t ", iCnt);
        }
        
    }
    
}

int main()
{
    int iValue = 0;
    

    printf("enter the number :");
    scanf("%d ",&iValue);

    Print_Odd_Number(iValue);
    

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10       Output: 1 3 5 7 9
//
////////////////////////////////////////////////////////////////////