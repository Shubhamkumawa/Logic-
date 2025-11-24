/////////////////////////////////////////////////////////
//
//  Function Name : Sum_Even_Number
//  Description   : Accept number and counts the frequency of digit less than 6
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>                   

int Count(int iNo)
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
        if(iDigit < 6)
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

    iRet = Count(iValue);
    printf("Total number of digit less than 6 : %d", iRet);
    
    return 0 ;
}

/////////////////////////////////////////////////////////////////////////
//
//  Input: 36598       Output: Total number of digit less than 6 : 2   
//
/////////////////////////////////////////////////////////////////////////