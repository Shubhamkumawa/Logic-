/////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description   : Accept n number and prints that number of even number
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 11/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt= 1 ; iCnt<=(2*iNo); iCnt++)
    {
        if((iCnt)%2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 5        Output: 2 4 6 8 10 
//
/////////////////////////////////////////////////////////