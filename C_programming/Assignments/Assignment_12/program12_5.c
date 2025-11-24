/////////////////////////////////////////////////////////
//
//  Function Name : Is_Divisible_by_five
//  Description   : Accept n number and prints number is divisible by five or not
//  Input         : Integer 
//  Output        : Boolean
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>                      
#include<stdbool.h>                    

bool is_Divisible_by_five(int iNo)
{
    if(iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false ;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter the number :");
    scanf("%d ",&iValue);

    bRet = is_Divisible_by_five(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 5 ", iValue);

    }
    else
    {
        printf("%d is not Divisible by 5 ", iValue);
    }

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10       Output: 10 is divisible by 5
//  Input: 13       Output: 13 is not divisible by 5   
//
////////////////////////////////////////////////////////////////////