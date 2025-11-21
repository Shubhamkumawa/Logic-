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

void Accept(int iNo)
{
    int  iCnt = 0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input : 5       Output : * * * * * 
//
/////////////////////////////////////////////////////////
