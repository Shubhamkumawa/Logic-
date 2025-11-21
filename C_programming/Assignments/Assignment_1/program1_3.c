/////////////////////////////////////////////////////////
//
//  Function Name : ReverseDisplay
//  Description   : Print the reverse number
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 11/11/2025
//
/////////////////////////////////////////////////////////


#include<stdio.h>
void ReverseDisplay(int ino)
{
    int iCnt=0;
    
   for(iCnt=ino;iCnt>=1;iCnt--)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int ivalue = 0;
    printf("Enter a number : ");
    scanf("%d",&ivalue);

    ReverseDisplay(ivalue);
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input : 5       Output : 5 4 3 2 1
//
/////////////////////////////////////////////////////////

