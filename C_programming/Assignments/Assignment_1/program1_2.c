/////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Print marvellous for the value taken from user
//  Input         : Integer 
//  Output        : Prints n munber of string
//  Author        : Shubham Shankarlal kumawat
//  Date          : 11/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int ino)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=ino;iCnt++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter a number : ");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input : 3       Output : Marvellous
//                           Marvellous
//                           Marvellous
//
/////////////////////////////////////////////////////////

