/////////////////////////////////////////////////////////
//
//  Function Name : Print_Even_Number
//  Description   : Accept n number and prints even number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void Print_Even_Number(int iNo)
{
    int iCnt = 0;
    
    for(iCnt =1 ; iCnt <= iNo ; iCnt++ )
    {
        if(iCnt%2 == 0)
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

    Print_Even_Number(iValue);
    

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10       Output: 2 4 6 8 10 
//
////////////////////////////////////////////////////////////////////