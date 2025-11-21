/////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Printing the number of * taken from user
//  Input         : Integer 
//  Output        : Prints n number of string
//  Author        : Shubham Shankarlal kumawat
//  Date          : 11/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int ino)
{
    if(ino>10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int i = 0;
    printf("Enter a number : ");
    scanf("%d",&i);
    Display(i);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input: 5        Output: Demo
//  Input: 11       Output: Hello
//
/////////////////////////////////////////////////////////
