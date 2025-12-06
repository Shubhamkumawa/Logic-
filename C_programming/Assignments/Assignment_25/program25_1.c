//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description :   return the difference between summation of even and odd numbers
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
    int iEvenSum = 0;
    int iOddSum = 0 ;
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {   
       if(Arr[iCnt]%2 == 0)
       {
        iEvenSum = iEvenSum + Arr[iCnt];
       }
       else
       {
        iOddSum = iOddSum + Arr[iCnt];
       }
    }
    return (iEvenSum - iOddSum);

}

int main()
{
    int iCnt = 0;
    int iLength = 0;
    int iRet = 0; 
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
    printf("Result is :%d", iRet );

    free(Ptr);                                                  
    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:6      Input2:85, 66, 3, 80, 93, 88     Output:Result is :53
//
///////////////////////////////////////////////////////////////////////////////////////////////