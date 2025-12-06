//////////////////////////////////////////////////////////
//
//  Function Name : Range
//  Description   : Accept an array and strating and end range and prints the numbers between the range
//  Input         : Integer 
//  Output        : Void
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize , int iNo1 , int iNo2)
{
    int iCnt = 0 ;
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > iNo1 && Arr[iCnt] < iNo2)
        {
            printf("%d\t",Arr[iCnt]);   
        }
    }
   
}


int main()
{
    int iCnt = 0;
    int iLength = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int*Ptr = NULL;

    printf("Enter the number of elements in Array : \n");
    scanf("%d" , &iLength);

    Ptr=(int*)malloc(iLength*sizeof(int));

    if(Ptr == NULL)
    {
        printf(" Memory allocation failed !!!!!");
    }

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]);
    }

    printf("Enter the Starting point : \n");
    scanf("%d" , &iValue1);

    printf("Enter the Ending point : \n");
    scanf("%d" , &iValue2);

    Range(Ptr , iLength , iValue1 , iValue2);

    free(Ptr);

    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input: 5 , {10,11,12,15,18} , 9 , 16        Output: 10 11 12 15
//
//////////////////////////////////////////////////////////////////////////////////