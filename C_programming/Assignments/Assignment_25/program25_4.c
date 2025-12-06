//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display all such elements which  divisible by 5 and 3
//  Input :         Integer
//  output :        Void
//  Author :        Shubham Shankarlal Kumawat
//  Date :          22/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                              
#include<stdlib.h>                                             


void Display(int Arr[],int iSize )
{
    int iCnt = 0 ;
    
    for(iCnt =0 ; iCnt < iSize ; iCnt++)
    {   
       if((Arr[iCnt]%5 == 0 )&& (Arr[iCnt]%3 == 0))
       {
         printf("%d\n", Arr[iCnt]);
       }
    }
}

int main()
{
    int iCnt = 0;
    int iLength = 0; 
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

    Display(Ptr , iLength );

    free(Ptr);                                                      
    return 0 ;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Input1:6      Input2:85, 66, 3, 15, 93, 88     Output:Result is :15
//
///////////////////////////////////////////////////////////////////////////////////////////////