//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Maximum
//  Description :   Accept N number and prints the maximum number
//  Input :         Integer
//  output :        Integer
//  Author :        Shubham Shankarlal Kumawat
//  Date :          22/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Maximun(int Arr[],int iSize )
{
    int iCnt = 0 ;
    int iMax = 0;
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];  
        }
    }
   return iMax;
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

    iRet = Maximun(Ptr , iLength );
    printf("Maximun  numbers : %d", iRet);

    free(Ptr);

    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input: 6 , {85, 66, 3, 55, 93, 88}     Output:Maximun  numbers : 93
//
///////////////////////////////////////////////////////////////////////////////////////////////