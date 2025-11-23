/////////////////////////////////////////////////////////
//
//  Function Name : Checkleapyear
//  Description   : Accept n number and prints leap year 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void checkleapyear(int year)
{
    if(year%4==0)
    {
        printf("%d is Leap Year",year);
    }
    else
    {
       printf("%d is not Leap Year",year); 
    }

}
int main()
{
    int yr = 0;
    printf("Enter year : \n");
    scanf("%d",&yr);
    checkleapyear(yr);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 2024       Output: 2024 is leap year 
//  Input: 2025       Output: 2025 is not leap year 
//
/////////////////////////////////////////////////////////