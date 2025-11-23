/////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description   : Accept n number and prints multiplication of number  
//  Input         : Integer,Integer, Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int Multiply(int iNo1 ,int iNo2 , int iNo3)
{
        int Mult = 0;

        if(iNo1 != 0 , iNo2 != 0 , iNo3 != 0)
        {
            Mult = iNo1*iNo2*iNo3;
        }
        else if (iNo1 ==0 )
        {
            iNo1 =1;
            Mult =iNo2*iNo3; 
        }
        else if(iNo2 == 0)
        {
            Mult = iNo1*iNo3;
        }
        else if( iNo3 == 0)
        {
            Mult = iNo1*iNo2;
        }
        else
        {
            Mult =0;
        }
         
        return Mult ;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0 ;
    int iRet = 0 ;

    printf("Enter three number :");
    scanf("%d%d%d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2 , iValue3);

    printf("Multipilcation of number are %d",iRet);

    return 0 ;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Input: 12 , 12 , 12       Output: Multipilcation of number are 1728   
//
////////////////////////////////////////////////////////////////////////////////