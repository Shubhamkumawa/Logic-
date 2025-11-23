/////////////////////////////////////////////////////////
//
//  Function Name : Findmax
//  Description   : Accept n number and prints number is maximum
//  Input         : Integer,Integer,Integer
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
int Findmax(int a , int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else  // if(c>a && c>b)
    {
        return c;
    }
}
int main()
{
    int num1= 0, num2 = 0, num3 = 0, result = 0;
    printf("Enter three number : \n");
    scanf("%d%d%d",&num1,&num2,&num3);
    result =  Findmax(num1,num2,num3);
    printf("%d is maximun number",result);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input:12,13,14       Output: 14 is maximum number 
//
/////////////////////////////////////////////////////////