/////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description   : Accept total marks and obtained marks  and prints percentage of marks   
//  Input         : Float , Float 
//  Output        : Float
//  Author        : Shubham Shankarlal kumawat
//  Date          : 12/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>

float Percentage(float fNo1 , float fNo2)
{
    float percentage = 0.0;
    percentage = (fNo2 /fNo1)*100 ;

    return percentage ;

}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fRet = 0.0;

    printf("Enter the Total Marks :");
    scanf("%f",&fValue1);

    printf("Enter the Obtained  Marks :");
    scanf("%f",&fValue2);

    fRet = Percentage(fValue1 , fValue2);
    printf("Percentage  is %f ",fRet);

    return 0 ;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Input: 500 , 450       Output: Percentage  is 90.00000   
//
////////////////////////////////////////////////////////////////////////////////