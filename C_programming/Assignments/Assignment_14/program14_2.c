/////////////////////////////////////////////////////////
//
//  Function Name : ChkZero
//  Description   : Accept number and check wether it contains zero or not
//  Input         : Integer 
//  Output        : Boolean
//  Author        : Shubham Shankarlal kumawat
//  Date          : 13/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>                   
#include<stdbool.h>                 

bool ChkZero(int iNo)
{
    int iDigit = 0;

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
            return true;
        }
        else
        {
            return false ;
        }
    }
    
}

int main()
{
    int iValue = 0 ;
    bool bRet = false ;
    
    printf("Enter the number: ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if(bRet == true )
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }
    
    return 0 ;
}

////////////////////////////////////////////////////////////////////
//
//  Input: 345       Output: There is no Zero
//  Input: 340       Output: It contains Zero   
//
////////////////////////////////////////////////////////////////////