/////////////////////////////////////////////////////////
//
//  Function Name : OddFactorial
//  Description   : Accept n number and prints multiplication of odd factorial of n number  
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0 ;
    int OddFact = 1  ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        if(iCnt%2 == 1)
        {
            OddFact = OddFact*iCnt;
        }
    }
    return OddFact ;
}

int main()
{
    int iValue =0 ;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("multiplication of Odd factorial of number is %d",iRet);

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Input: 5       Output: Multiplication of Odd factorial of number is 15   
//
//////////////////////////////////////////////////////////////////////////////