/////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : checking whether number is divisible by 5 or not 
//  Input         : Integer 
//  Output        : Boolean
//  Author        : Shubham Shankarlal kumawat
//  Date          : 11/11/2025
//
/////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>
bool check (int iNo)
{
    if(iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue =0;
    bool  bRet = false;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = check(iValue);
    if (bRet==true)
    {
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisible by 5");
    }
    return 0;
}

/////////////////////////////////////////////////////////
//
//  Input : 15       Output : Divisible by 5
//
/////////////////////////////////////////////////////////

