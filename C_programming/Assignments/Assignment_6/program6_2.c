/////////////////////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Description   : Accept n number and prints number is greater than 100 or not 
//  Input         : Integer 
//  Output        : Boolean
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////


#include<stdio.h>                       
#include<stdbool.h>                     

bool ChkGreater(int iNo)
{
    if(iNo>100)
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

    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    if(bRet == true)
    {
        printf("Number is Greater than 100");
    }
    else
    {
        printf("Number is less than  100");
    }
    return 0 ;
}

/////////////////////////////////////////////////////////////////////
//
//  Input: 54       Output: Number is less than 100  
//  Input: 154       Output: Number is greater than 100
//
/////////////////////////////////////////////////////////////////////