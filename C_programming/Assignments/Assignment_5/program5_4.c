/////////////////////////////////////////////////////////
//
//  Function Name : Checknumber
//  Description   : Accept n number and prints number is positive or negative or zero
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
void checknumber(int ino)
{
    if(ino>0)
    {
        printf("%d is positive number",ino);
    }
    else if(ino<0)
    {
        printf("%d is negative number",ino);
    }
    else
    {
        printf("%d is Zero",ino);
    }
}
int main()
{
    int ivalue = 0;
    printf("Enter a number : \n");
    scanf("%d",&ivalue);
    checknumber(ivalue);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 0       Output: 0 is zero
//  Input: 3       Output: 3 is positive number
//  Input: -3      Output: -3 is negative number 
//
/////////////////////////////////////////////////////////