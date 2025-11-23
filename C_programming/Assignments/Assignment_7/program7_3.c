/////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept n number and prints its number line  
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

    for(iCnt = -iNo ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt);
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

//////////////////////////////////////////////////////////
//
//  Input: 5       Output: -5 -4 -3 -2 -1 0 1 2 3 4 5 
//
//////////////////////////////////////////////////////////