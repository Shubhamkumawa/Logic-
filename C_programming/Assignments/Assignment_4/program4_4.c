/////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Description   : Accept n number and prints sum of non factors of that number 
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
int NonFact(int ifact)
{
    int iCnt = 0, isum = 0;

    if(ifact<0)
    {
        ifact = -ifact;
    }
    for(iCnt =1 ; iCnt<= ifact; iCnt++)
    {
        if((ifact%iCnt)!=0)
        {
            isum = isum +iCnt;
        }
   }
   return isum;
}
int main()
{
    int iNo = 0, iret = 0;
    printf("Enter a number : \n");
    scanf("%d",&iNo);
    iret = NonFact(iNo);
    printf("Sum of non factors are : %d",iret);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 6       Output: 9 
//
/////////////////////////////////////////////////////////