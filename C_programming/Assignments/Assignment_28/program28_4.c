///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display the pattern of character
//  Input :         Integer
//  output :        Void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          24/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              

void Display(int iRow , int iCol)
{
    int iCnt1 = 0 ;
    int iCnt2 = 0 ;

    for(iCnt1 = iRow ; iCnt1 >= 1 ; iCnt1--)
    {
    
        for(iCnt2 = 1 ; iCnt2 <= iCol ; iCnt2++)
        {
                printf("%d\t", iCnt1);
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0 ;

    printf("Enter the number of rows:");
    scanf("%d", &iValue1);

    printf("Enter the number of columns:");
    scanf("%d", &iValue2);

    Display(iValue1 , iValue2);

    return 0 ;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:3    Input2:4   Output:4 4 4 4
//                                3 3 3 3
//                                2 2 2 2
//                                1 1 1 1
//
//  Input1:4    Input2:5   Output:4 4 4 4 4
//                                3 3 3 3 3
//                                2 2 2 2 2
//                                1 1 1 1 1
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////