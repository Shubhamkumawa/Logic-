/////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description   : Accept n number and prints Difference betwwen factors and non factors of that number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////


#include<stdio.h>

void FactDiff(int iNo)
{
  int iCnt = 0 , iFactSum = 0, iNonFactSum = 0, iDiff = 0 ;

  if(iNo<0)
  {
    iNo = -iNo;
  }
   for(iCnt =1 ; iCnt<iNo; iCnt++)
   {
    if((iNo%iCnt)==0)
    {
        iFactSum = iFactSum+iCnt;
    }
    else
    {
      iNonFactSum = iNonFactSum +iCnt;
    }
   }

   iDiff = iFactSum - iNonFactSum;

   printf("Difference btween the factor and non factor : %d", iDiff);
   
}

int main()
{
    int iValue = 0;
  
    printf("Enter the number :");
    scanf("%d",&iValue);

    FactDiff(iValue);
    
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 6       Output: -3 
//
/////////////////////////////////////////////////////////