//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Minimum
//  Description :   Accept N number and prints all minimum number 
//  Input :         Integer
//  output :        Integer
//  Author :        Shubham Shankarlal Kumawat
//  Date :          22/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimun(int Arr[],int iSize )
{
    int iCnt = 0 ;
    int iMin = 0;
    iMin = Arr[0]; 
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];  
        }
    }
   return iMin;
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

    iRet = Minimun(Ptr , iLength );
    printf("Minimun  numbers : %d", iRet);

    free(Ptr);

    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input: 5 , {1,2,3,4,5}    Output: Minimun  numbers : 1
//
///////////////////////////////////////////////////////////////////////////////////////////////