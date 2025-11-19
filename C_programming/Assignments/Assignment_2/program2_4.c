#include<stdio.h>

void Display(int iNo , int Frequency)
{
    if(Frequency < 0)
    {
        Frequency = -Frequency;
    }
    int iCnt = 0 ;

    for(iCnt = 1 ; iCnt <= Frequency ; iCnt++)
    {
        printf("%d\t", iNo);
    }
}
int main()
{
    int iValue1 = 0 , iCount = 0;
    printf("enter number:");
    scanf("%d",&iValue1);

    printf("enter Frequency:");
    scanf("%d",&iCount);

    Display(iValue1 , iCount);

    return 0 ;

}