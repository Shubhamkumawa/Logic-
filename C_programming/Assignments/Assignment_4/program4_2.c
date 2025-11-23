/////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description   : Accept n number and prints  factors in decreasing order 
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////


#include<stdio.h>

int FactRev(int iNo)
{
  int iCnt = 0 ;

   if(iNo<0)
    {
        iNo = -iNo;
    }
    printf("Factors are : \n");
    for(iCnt =(iNo/2) ; iCnt>=1 ; iCnt--)
    {
        if((iNo%iCnt)==0)
        {
            printf(" %d\t",iCnt);
        }
   }
   
}
int main()
{
    int iValue = 0;

    printf("enter the number :");
    scanf("%d",&iValue);

    FactRev(iValue);
   

    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 6       Output: 3 2 1
//
/////////////////////////////////////////////////////////