//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description :   Accept n number and prints difference between the maximum and minimum number 
//  Input :         Integer
//  output :        Integer
//  Author :        Shubham Shankarlal Kumawat
//  Date :          22/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize )
{
    int iCnt = 0 ;
    int iMin = 0;
    iMin = Arr[0];
    int iMax = 0 ; 
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];  
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
   return (iMax - iMin);
}


int main()
{
    int iCnt = 0;
    int iLength = 0;
    int iRet = 0 ;
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

    iRet = Difference(Ptr , iLength );
    printf("Difference  between maximum and minimum : %d", iRet);

    free(Ptr);

    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input: 5 , {10,20,30,40,50}    Output: Difference  between maximum and minimum : 40
//
///////////////////////////////////////////////////////////////////////////////////////////////