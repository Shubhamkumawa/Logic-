/////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Description   : Accept n number and prints factorial of n number  
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>


int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1 ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1 ;iCnt <= iNo ; iCnt++)
    {
        iFact = iFact*iCnt ;
    }
    
    return iFact ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number :%d",iRet);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 5       Output: Factorial of number : 120  
//
////////////////////////////////////////////////////////////////////