/////////////////////////////////////////////////////////
//
//  Function Name : CountRange
//  Description   : Accept number and count the range between 3 and 7 
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>                   

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    while(iNo != 0)
    {
        iDigit= iNo% 10 ;
        iNo = iNo / 10;
        if(iDigit > 3 && iDigit < 7 )
        {
            iCount++;
        }
    
    }
    return iCount ;
    
}

int main()
{
    int iValue = 0 ;
    int iRet =  0 ;
    
    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("Range between 3 and 7 digit : %d", iRet);
    
    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 35897       Output: Range between 3 and 7 digit : 2   
//
////////////////////////////////////////////////////////////////////