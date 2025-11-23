/////////////////////////////////////////////////////////
//
//  Function Name : Checkevenodd
//  Description   : Accept n number and prints even or odd number 
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void Checkevenodd(int ivalue)
{
    
    if(ivalue%2 == 0)
    {
        printf("%d is even number",ivalue);
    }
    else
    {
        printf("%d is odd number",ivalue);
    }
}
int main()
{
    int ino = 0;
    printf("Enter a number : ");
    scanf("%d",&ino);
    Checkevenodd(ino);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 6       Output: 6 is even number 
//
/////////////////////////////////////////////////////////