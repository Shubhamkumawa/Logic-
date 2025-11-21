/////////////////////////////////////////////////////////
//
//  Function Name : CheckEven
//  Description   : Accepts number and check even or odd
//  Input         : Integer  
//  Output        : Boolean
//  Author        : Shubham Shankarlal kumawat
//  Date          : 11/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>                                   
#include<stdbool.h>                                 



bool CheckEven(int iNo)
{
 
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number",iValue);
    }
    else
    {
        printf("%d is Odd Number",iValue);
    }

    return 0; 
}

/////////////////////////////////////////////////////////
//
//  Input: 2        Output: 2 is Even Number 
//  Input: 5        Output: 5 is Odd Number
//
/////////////////////////////////////////////////////////
