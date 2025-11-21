/////////////////////////////////////////////////////////
//
//  Function Name : Displayfactor
//  Description   : Accept n number and displays the even factor of that number
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 11/11/2025
//
/////////////////////////////////////////////////////////



#include<stdio.h>

void Displayevenfactor(int iNo)
{
    int i = 0;
    if(iNo< 0)
    {
        iNo= -iNo;
    }
    for(i =1 ; i<=iNo/2; i++)
    {
        if(iNo%i == 0 && i%2 == 0)
        {
            printf("%d\t", i); 
        }
        
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);

    Displayevenfactor(iValue);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 6        Output: 2 
//
/////////////////////////////////////////////////////////