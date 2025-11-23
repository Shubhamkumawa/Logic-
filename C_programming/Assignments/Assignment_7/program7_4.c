/////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept n number and prints all odd numbers upto  n number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if(iCnt % 2 == 1)
        {
            printf("%d\t",iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 5       Output: 1 3 
//
////////////////////////////////////////////////////////////////////