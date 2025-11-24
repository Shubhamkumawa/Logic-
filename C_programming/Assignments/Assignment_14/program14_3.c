/////////////////////////////////////////////////////////
//
//  Function Name : Sum_Even_Number
//  Description   : Accept number and counts the frequency of 2 in it
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>                   

int CountTwo(int iNo)
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
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);
    printf("Total number of two : %d", iRet);
    
    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 34242       Output: Total number of two : 2   
//
////////////////////////////////////////////////////////////////////