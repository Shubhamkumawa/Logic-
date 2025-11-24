/////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description   : Accept number and count the even digits 
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>                   

int CountEven(int iNo)
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
        if(iDigit % 2 == 0)
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

    iRet = CountEven(iValue);
    printf("Even digit : %d", iRet);
    
    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 32458       Output: Even digit : 3   
//
////////////////////////////////////////////////////////////////////