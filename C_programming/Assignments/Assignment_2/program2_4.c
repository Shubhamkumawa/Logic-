/////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts two numbers and dipalying the first number in second number of times
//  Input         : Integer , Integer 
//  Output        : Prints n number of first number
//  Author        : Shubham Shankarlal kumawat
//  Date          : 11/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo , int Frequency)
{
    if(Frequency < 0)
    {
        Frequency = -Frequency;
    }
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= Frequency ; iCnt++)
    {
        printf("%d\t", iNo);
    }
}
int main()
{
    int iValue1 = 0 , iCount = 0;
    printf("enter number:");
    scanf("%d",&iValue1);

    printf("enter Frequency:");
    scanf("%d",&iCount);

    Display(iValue1 , iCount);

    return 0 ;

}

/////////////////////////////////////////////////////////
//
//  Input: 5 , 3        Output: 5 5 5 
//
/////////////////////////////////////////////////////////
