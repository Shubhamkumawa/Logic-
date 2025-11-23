/////////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Description   : Accept n number and prints difference between even and odd factorial  
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0 ;
    int OddFact = 1  ;
    int EvenFact = 1 ;

    int FactDiff  = 0;

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
        else 
        {
            OddFact = OddFact*iCnt;
        }
    }

    FactDiff = EvenFact - OddFact;
    return FactDiff ;
}

int main()
{
    int iValue =0 ;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf(" Factorial Difference is %d",iRet);

    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 10       Output: Factorial Difference is 2895   
//
////////////////////////////////////////////////////////////////////