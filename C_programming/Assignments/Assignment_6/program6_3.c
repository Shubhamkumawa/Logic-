/////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description   : Accept n number and prints number is equal or not 
//  Input         : Integer,Integer 
//  Output        : Boolean
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////


#include<stdio.h>                       
#include<stdbool.h>                  

bool ChkEqual(int iNo1 ,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    bool bRet = false;

    printf("Enter two number:");
    scanf("%d%d",&iValue1,&iValue2);

    bRet =ChkEqual(iValue1,iValue2);
    
    if(bRet == true)
    {
        printf("Numbers are Equal");
    }
    else
    {
        printf("Number are not Equal");
    }
    return 0;
}

/////////////////////////////////////////////////////////////////////
//
//  Input: 12 , 12       Output: Numbers are Equal  
//  Input: 154 , 100       Output: Number are not Equal
//
/////////////////////////////////////////////////////////////////////