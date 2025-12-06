//////////////////////////////////////////////////////////
//
//  Function Name : Productodd
//  Description   : Accept an array and print the product of odd number 
//  Input         : Integer 
//  Output        : Integer
//  Author        : Shubham Shankarlal kumawat
//  Date          : 22/11/2025
//
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Productodd(int Arr[],int iSize )
{
    int iCnt = 0 ;
    int iProduct = 1;
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt]%2 != 0)
        {
            iProduct = iProduct*Arr[iCnt];  
        }
    }
   return iProduct;
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

    iRet = Productodd(Ptr , iLength );
    printf("Product of odd numbers : %d", iRet);

    free(Ptr);

    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////
//
//  Input: 5 , {80,11,56,12,23}        Output: Product of odd numbers : 253
//
//////////////////////////////////////////////////////////////////////////////////