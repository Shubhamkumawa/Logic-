/////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Description   : Accept n number and prints non factors of that number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////


#include<stdio.h>
void NonFact(int ifact)
{
    int iCnt = 0 ;

    if(ifact<0)
    {
        ifact = -ifact;
    }
    printf("Non factors are : \n");

    for(iCnt =1 ; iCnt<= ifact; iCnt++)
    {
        if((ifact%iCnt)!=0)
        {
            printf("%d\t",iCnt);
        }
   }
}
int main()
{
    int iNo = 0;
    printf("Enter a number : \n");
    scanf("%d",&iNo);
    NonFact(iNo);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 6       Output: 4 5 
//
/////////////////////////////////////////////////////////