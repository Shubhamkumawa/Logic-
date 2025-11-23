/////////////////////////////////////////////////////////
//
//  Function Name : Findmax
//  Description   : Accept n number and prints maximum  number  
//  Input         : Integer,Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int Findmax(int ino1,int ino2)
{
    
    if(ino1>ino2)
    {
        return ino1;
    }
    else
    {
        return ino2;
    }
    
}
int main()
{
    int num1 = 0, num2 = 0, result = 0;
    printf("Enter num1 : \n");
    scanf("%d",&num1);
    printf("Enter num2 : \n");
    scanf("%d",&num2);
    result = findmax(num1,num2);
    printf("Maximum number is  : %d",result);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 25 , 78       Output: Maximum number is : 78 
//
/////////////////////////////////////////////////////////