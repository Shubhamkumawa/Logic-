//////////////////////////////////////////////////////////
//
//  Function Name : CountDiff
//  Description   : Accept number and prints th difference between even and odd digits
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>                   

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0 ;
    int iDiff =0 ;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit= iNo% 10 ;
        iNo = iNo / 10;
        if(iDigit %2 ==0)
        {
           iEvenSum = iEvenSum + iDigit ;
        }
        else
        {
            iOddSum = iOddSum + iDigit ;
        }
    
    }

    iDiff = iEvenSum - iOddSum ;
    return iDiff ;
    
}

int main()
{
    int iValue = 0 ;
    int iRet =  0 ;
    
    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("Differenc : %d", iRet);
    
    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 2395       Output: Differenc : -15   
//
////////////////////////////////////////////////////////////////////