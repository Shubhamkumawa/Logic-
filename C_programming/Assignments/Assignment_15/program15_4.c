/////////////////////////////////////////////////////////
//
//  Function Name : MultiDigits
//  Description   : Accept number and prints the multiplication of digits
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>                   

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit= iNo% 10 ;
        iNo = iNo / 10;
        if(iDigit == 0)
        {
            break;
        }

        iMult = iMult*iDigit;
    
    }
    return iMult ;
    
}

int main()
{
    int iValue = 0 ;
    int iRet =  0 ;
    
    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);
    printf("Multiplication of digits : %d", iRet);
    
    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 2395       Output: Multiplication of digits : 270   
//
////////////////////////////////////////////////////////////////////