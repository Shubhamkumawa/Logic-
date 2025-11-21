/////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description   : Printing the number of * taken from user
//  Input         : Integer 
//  Output        : Prints n number of characters
//  Author        : Shubham Shankarlal kumawat
//  Date          : 11/11/2025
//
/////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    while(iNo > iCnt )
    {
        printf("*\t ");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0 ;

}

/////////////////////////////////////////////////////////
//
//  Input: 5        Output: * * * * * 
//
/////////////////////////////////////////////////////////
