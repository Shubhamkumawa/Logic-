/////////////////////////////////////////////////////////
//
//  Function Name : DivideTwoNumber
//  Description   : It is used to perform Division
//  Input         : Integer , Integer
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 11/11/2025
//
/////////////////////////////////////////////////////////
#include<stdio.h>

int DivideTwoNumber(int iNo1 , int iNo2)
{
    int iAns = 0;
    if (iNo2<0)
    {
        return -1;
    }
    iAns = iNo1/iNo2;
    return iAns ;
}

int main()
{
    int iValue1=15 , iValue2 = 5;
    int iRet;

    iRet = DivideTwoNumber(iValue1 , iValue2);
    printf("Division is %d", iRet );

    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input : 15 , 5       Output : 3
//
/////////////////////////////////////////////////////////
