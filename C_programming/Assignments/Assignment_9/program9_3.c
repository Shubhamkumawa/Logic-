/////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Description   : Accept n number and prints multiplication of even factorial of n number  
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0 ;
    int EvenFact = 1  ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        if(iCnt%2 == 0)
        {
            EvenFact = EvenFact*iCnt;
        }
    }
    return EvenFact ;
}

int main()
{
    int iValue =0 ;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Multiplication of Even factorial of number is %d",iRet);

    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input: 6       Output: Multiplication of  Even factorial of number is 48  
//
//////////////////////////////////////////////////////////////////////////////////