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
    
    for(iCnt1 = 1 ; iCnt1 <= iRow ; iCnt1++)
    {
        char character = 'A';                      
        for(iCnt2 = 1 ; iCnt2 <= iCol ; iCnt2++)
        {
            if((iCnt1)% 2 == 1)
            {
                printf("%c\t", (character+32));
                character++;
            }
            else
            {
                printf("%d\t", iCnt2);
                
            }
            
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
//  Input1:4    Input2:5   Output:a       b       c       d       e
//                                1       2       3       4       5
//                                a       b       c       d       e
//                                1       2       3       4       5
//                                a       b       c       d       e

//
//  Input1:3    Input2:3   Output:a  b  c 
//                                1  2  3
//                                a  b  c
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////