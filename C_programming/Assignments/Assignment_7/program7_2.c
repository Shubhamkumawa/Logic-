/////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept n number and prints that n number 
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

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
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

////////////////////////////////////////////
//
//  Input: 6       Output: 1 2 3 4 5 6 
//
////////////////////////////////////////////